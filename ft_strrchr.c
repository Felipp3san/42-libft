/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:17:39 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/17 18:43:13 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			str_len;
	size_t			i;

	ch = c;
	str_len = ft_strlen(s);
	i = str_len;
	while (i > 0 && s[i] != ch)
		i--;
	if (s[i] == ch)
		return ((char *) &s[i]);
	return (NULL);
}

//int	main(void)
//{
//	char	*custom;
//	char	*original;
//
//	printf("=== Test 1 ===\n");
//	custom = ft_strrchr("Find the last ch in this string", 'i');
//	original = strrchr("Find the last ch in this string", 'i');
//	printf("Located char add: %p - char: %c\n", custom, *custom);
//	printf("Located char add: %p - char: %c\n", original, *original);
//
//	printf("=== Test 2 ===\n");
//	custom = ft_strrchr("Find the last ch in this string", ' ');
//	original = strrchr("Find the last ch in this string", ' ');
//	printf("Located char add: %p - char: %c\n", custom, *custom);
//	printf("Located char add: %p - char: %c\n", original, *original);
//
//	printf("=== Test 3 ===\n");
//	custom = ft_strrchr("Find the last ch in this string", '\0');
//	original = strrchr("Find the last ch in this string", '\0');
//	printf("Located char add: %p - char: %c\n", custom, *custom);
//	printf("Located char add: %p - char: %c\n", original, *original);
//
//	printf("=== Test 4 ===\n");
//	custom = ft_strrchr("", 'a');
//	original = strrchr("", 'a');
//	if (original == NULL && custom == original)
//		printf("Both functions returned NULL\n");
//
//	printf("=== Test 5 ===\n");
//	custom = ft_strrchr("", '\0');
//	original = strrchr("", '\0');
//	printf("Located char add: %p - char: %c\n", custom, *custom);
//	printf("Located char add: %p - char: %c\n", original, *original);
//
//	return (0);
//}
