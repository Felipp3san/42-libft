/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:05:53 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/11 19:44:37 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strnstr()
{
	char	little[10] = "Find this";
	char	big[40] = "StringStringString";
	char	*empty = NULL;
	char	*ptr;

	// TEST 1
	ptr = ft_strnstr(big, little, 18);
	if (ptr == NULL)
		printf("ft_strnstr test 1 passed!\n");
	else
		printf("ft_strnstr test 1 failed.\n");

	// TEST 2
	strlcpy(big, "StringFindString", 40);
	ptr = ft_strnstr(big, little, 18);
	if (ptr == NULL)
		printf("ft_strnstr test 2 passed!\n");
	else
		printf("ft_strnstr test 2 failed.\n");

	// TEST 3
	strlcpy(big, "StringFind thisString", 40);
	ptr = ft_strnstr(big, little, 18);
	if (ptr != NULL)
		printf("ft_strnstr test 3 passed!\n");
	else
		printf("ft_strnstr test 3 failed.\n");

	// TEST 4
	strlcpy(little, "", 10);
	ptr = ft_strnstr(big, little, 0);
	if (ptr == &big[0])
		printf("ft_strnstr test 4 passed!\n");
	else
		printf("ft_strnstr test 4 failed.\n");

	// TEST 5
	strlcpy(little, "Find this", 10);
	ptr = ft_strnstr(empty, little, 0);
	if (ptr == NULL)
		printf("ft_strnstr test 5 passed!\n");
	else
		printf("ft_strnstr test 5 failed.\n");
}

int	main(void)
{
	test_ft_strnstr();
	return (0);
}
