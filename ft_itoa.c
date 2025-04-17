/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:55:22 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 21:01:10 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	size;

	size = 0;
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	size_t	is_neg;

	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	size = get_size(n) + is_neg;
	str = (char *) malloc(size + 1);
	if (str)
	{
		str[size] = '\0';
		while (size != is_neg)
		{
			str[size - 1] = (n % 10) + '0';
			n = n / 10;
			size--;
		}
		if (is_neg == 1)
			str[0] = '-';
	}
	return (str);
}
