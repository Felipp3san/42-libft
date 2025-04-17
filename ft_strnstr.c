/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:56:02 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/11 19:48:59 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	found;
	size_t	i;
	size_t	little_len;

	i = 0;
	ptr = NULL;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *) big);
	while (i < len && found != little_len)
	{
		if (big[i] == little[found])
		{
			found++;
			if (found == 1)
				ptr = (char *) &big[i];
		}
		else
		{
			ptr = NULL;
			found = 0;
		}
		i++;
	}
	return (ptr);
}
