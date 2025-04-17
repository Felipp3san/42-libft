/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:08:12 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 21:40:14 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_memchr()
{
	char str[5] = "Test";
	char *ptr1;
	char *ptr2;

	// TEST 1
	ptr1 = (char *) ft_memchr(str, 's', 5);
	ptr2 = (char *) memchr(str, 's', 5);
	if ((ptr1 != NULL)  && (ptr2 != NULL) && *ptr1 == 's' && *ptr2 == 's')
	{
		printf("located char: %c\n", *ptr1);
		printf("address: %p\n", ptr1);
		printf("located char (original): %c\n", *ptr2);
		printf("address (original): %p\n", ptr2);
		printf("ft_memchr test 1 passed!\n");
	}
	else
		printf("ft_memchr test 1 failed.\n");

	printf("\n");
	// TEST 2
	ptr1 = (char *) ft_memchr(str, 'z', 5);
	ptr2 = (char *) memchr(str, 'z', 5);
	if ((ptr1 == NULL) && (ptr2 == NULL))
	{
		printf("located char: NULL\n");
		printf("address: NULL\n");
		printf("located char (original): NULL\n");
		printf("address (original): NULL\n");
		printf("ft_memchr test 2 passed!\n");
	}
	else
		printf("ft_memchr test 2 failed.\n");

	printf("\n");
	// TEST 3
	ptr1 = (char *) ft_memchr(str, 'z', 5);
	ptr2 = (char *) memchr(str, 'z', 5);
	if ((ptr1 == NULL) && (ptr2 == NULL))
	{
		printf("located char: NULL\n");
		printf("address: NULL\n");
		printf("located char (original): NULL\n");
		printf("address (original): NULL\n");
		printf("ft_memchr test 3 passed!\n");
	}
	else
		printf("ft_memchr test 3 failed.\n");

	printf("\n");
	// TEST 4
	ptr1 = (char *) ft_memchr(str, '\0', 5);
	ptr2 = (char *) memchr(str, '\0', 5);
	if ((ptr1 != NULL)  && (ptr2 != NULL) && *ptr1 == '\0' && *ptr2 == '\0')
	{
		printf("located char: %c\n", *ptr1);
		printf("address: %p\n", ptr1);
		printf("located char (original): %c\n", *ptr2);
		printf("address (original): %p\n", ptr2);
		printf("ft_memchr test 4 passed!\n");
	}
	else
		printf("ft_memchr test 4 failed.\n");
}

int	main(void)
{
	test_ft_memchr();
	return (0);
}
