/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:23:00 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/16 22:13:33 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_c;
	unsigned char		*dest_c;
	size_t				i;

	src_c = (const unsigned char *) src;
	dest_c = (unsigned char *) dest;
	if (dest_c < src_c)
	{
		i = 0;
		while (i < n)
		{
			dest_c[i] = src_c[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest_c[i - 1] = src_c[i - 1];
			i--;
		}
	}
	return (dest);
}
