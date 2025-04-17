/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:33:55 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:35:12 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_bzero()
{
	const int	SIZE = 10;
	char str[] = "TestTest1";
	char str2[] = "TestTest2";

	ft_bzero((str + (SIZE - 2)), 1);
	bzero((str2 + (SIZE - 2)), 1);
	if (*str == *str2)
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_bzero test 1 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_bzero test 1 failed.\n");
	}

	ft_bzero((str + (SIZE - 5)), 1);
	bzero((str2 + (SIZE - 5)), 1);
	if (*str == *str2)
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_bzero test 2 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_bzero test 2 failed.\n");
	}

	ft_bzero((str + 1), 1);
	bzero((str2 + 1), 1);
	if (*str == *str2)
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_bzero test 3 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_bzero test 3 failed.\n");
	}
}

int	main()
{
	test_ft_bzero();
	return (0); 
}
