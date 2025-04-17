/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:44:22 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/17 20:01:02 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	found;
	char	*ptr;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		found = 0;
		while (little[found] == big[i + found] && (i + found) < len)
		{
			found++;
			if (found == 1)
				ptr = (char *) &big[i];
			if (found == little_len)
				return (ptr);
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char	*haystack;
//	char	*needle;
//	char	*original;
//	char	*custom;
//
//	printf("=== Test 1 ===\n");
//	haystack = "Find this string!";
//	needle = "this";
//	custom = ft_strnstr(haystack, needle, 17);
//	original = strnstr(haystack, needle, 17);
//	printf("Address: %p - String: %s\n", custom, custom);
//	printf("Address: %p - String: %s\n", original, original);
//
//	printf("=== Test 2 ===\n");
//	haystack = "Find this string!";
//	needle = "this";
//	custom = ft_strnstr(haystack, needle, 0);
//	original = strnstr(haystack, needle, 0);
//	printf("Address: %p - String: %s\n", custom, custom);
//	printf("Address: %p - String: %s\n", original, original);
//
//	printf("=== Test 3 ===\n");
//	haystack = "Find this string!";
//	needle = "";
//	custom = ft_strnstr(haystack, needle, 17);
//	original = strnstr(haystack, needle, 17);
//	printf("Address: %p - String: %s\n", custom, custom);
//	printf("Address: %p - String: %s\n", original, original);
//	
//	printf("=== Test 4 ===\n");
//	haystack = "Find this string!";
//	needle = "ZZXXZXX";
//	custom = ft_strnstr(haystack, needle, 17);
//	original = strnstr(haystack, needle, 17);
//	printf("Address: %p - String: %s\n", custom, custom);
//	printf("Address: %p - String: %s\n", original, original);
//
//	printf("=== Test 5 ===\n");
//	haystack = "";
//	needle = "ZZXXZXX";
//	custom = ft_strnstr(haystack, needle, 1);
//	original = strnstr(haystack, needle, 1);
//	printf("Address: %p - String: %s\n", custom, custom);
//	printf("Address: %p - String: %s\n", original, original);
//
//	printf("=== Test 6 ===\n");
//	haystack = "Needle in the end of the string";
//	needle = "the";
//	custom = ft_strnstr(haystack, needle, 11);
//	original = strnstr(haystack, needle, 11);
//	printf("Address: %p - String: %s\n", custom, custom);
//	printf("Address: %p - String: %s\n", original, original);
//
//	return (0);
//}
