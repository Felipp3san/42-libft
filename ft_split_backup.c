/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:39:14 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 13:49:55 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	size_t	char_count;
	size_t	str_len;

	if (!s)
		return (0);
	i = 0;
	char_count = 0;
	word_count = 0;
	str_len = ft_strlen(s);
	while (i < str_len)
	{
		if (s[i] != c)
		{
			if (char_count == 0)
				word_count++;
			char_count++;
		}
		else
			char_count = 0;
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**arr;
	int		start;

	arr = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (arr);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i] == '\0') && start != -1)
		{
			arr[j] = ft_substr(s, start, i - start);
			start = -1;
			j++;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}

//static void	print_arr(char	**arr)
//{
//	printf("[");
//	while (*arr != NULL)
//	{
//		printf("\"%s\"", *arr);
//		if (*(arr + 1) != NULL)
//			printf(",");
//		arr++;
//	}
//	printf("]\n");
//}
//
//int	main(void)
//{
//	char	**arr;
//	char	*str;
//	char	ch;
//
//	printf("=== Test 1 ===\n");
//	str = "Split this word into multiple words";
//	ch = 32;
//	arr = ft_split(str, ch);
//	print_arr(arr);
//
//	printf("=== Test 2 ===\n");
//	str = "Split this word into multiple words";
//	ch = 0;
//	arr = ft_split(str, ch);
//	print_arr(arr);
//
//	printf("=== Test 3 ===\n");
//	str = "";
//	ch = 32;
//	arr = ft_split(str, ch);
//	print_arr(arr);
//
//	printf("=== Test 4 ===\n");
//	str = "Split this word into multiple words";
//	ch = 'i';
//	arr = ft_split(str, ch);
//	print_arr(arr);
//
//	return (0);
//}
