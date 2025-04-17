/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:36:40 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/10 18:40:38 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strrchr()
{
	char	*target;
	char	*located;

	target = "Test string";
	located = ft_strrchr(target, 's');
	if (*located == 's')
	{
		printf("ft_strrchr test 1 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_strrchr test 1 failed.\n");

	located = ft_strrchr(target, 'i');
	if (*located == 'i')
	{
		printf("ft_strrchr test 2 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_strrchr test 2 failed.\n");

	located = ft_strrchr(target, 'T');
	if (*located == 'T')
	{
		printf("ft_strrchr test 3 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_strrchr test 3 failed.\n");

	located = ft_strrchr(target, '\0');
	if (*located == '\0')
	{
		printf("ft_strrchr test 4 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_strrchr test 4 failed.\n");

	located = strrchr(target, 'z');
	if (located == NULL)
	{
		printf("ft_strrchr test 5 passed!\n");
		printf("located char: NULL\n");
		printf("address: NULL\n");
	}
	else
		printf("ft_strrchr test 5 failed.\n");
}

int	main(void)
{
	test_ft_strrchr();
	return (0);
}
