/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:56:43 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 21:10:06 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	size_t	char_count;
	size_t	str_len;

	i = 0;
	word_count = 0;
	str_len = ft_strlen(s);
	while (i <= str_len)
	{
		if (s[i] != c && s[i] != '\0')
			char_count++;
		else if (char_count > 0)
		{
			char_count = 0;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	word_count;
	size_t	i;
	size_t	j;
	int		start;

	word_count = count_words(s, c);
	strs = (char **) malloc(word_count * sizeof(char *));
	if (strs)
	{
		i = 0;
		j = 0;
		start = -1;
		while (i <= ft_strlen(s))
		{
			if (s[i] != c && start == -1)
				start = i;
			if ((s[i] == c || s[i] == '\0') && start != -1)
			{
				strs[j] = ft_substr(s, start, i - start);
				start = -1;
				j++;
			}
			i++;
		}
	}
	return (strs);
}
