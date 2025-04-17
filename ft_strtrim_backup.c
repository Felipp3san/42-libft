/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:52:28 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 20:52:31 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static int		in_set(char const *set, char const c)
//{
//	size_t	i;
//	size_t	set_len;
//
//	i = 0;
//	set_len = ft_strlen(set);
//	while (i < set_len)
//	{
//		if (*(set + i) == c)
//			return (1);
//		i++;
//	}
//	return (0);
//}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	start_idx;
	size_t	end_idx;

	i = 0;
	while (ft_strchr(set, *(s1 + i)))
		i++;
	start_idx = i;
	i = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + i)))
		i--;
	end_idx = i + 1;
	dst = (char *) malloc(end_idx - start_idx + 1);
	if (dst)
	{
		i = 0;
		while (start_idx < end_idx)
		{
			*(dst + i) = *(s1 + start_idx);
			start_idx++;
			i++;
		}
		*(dst + i) = '\0';
	}
	return (dst);
}
