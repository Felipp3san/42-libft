/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:20:38 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 19:21:06 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	apply_padding(void)
{
	ft_putchar_fd(' ', 1);
	return (1);
}

size_t	ft_printnbr(int nbr, int padding)
{
	char	*str;
	size_t	size;

	str = ft_itoa(nbr);
	size = ft_strlen(str);
	if (padding > 0)
	{
		while (size < (unsigned long) padding)
			size += apply_padding();
	}
	ft_putstr_fd(str, 1);
	if (padding < 0)
	{
		padding = -padding;
		while (size < (unsigned long) padding)
			size += apply_padding();
	}
	free(str);
	return (size);
}
