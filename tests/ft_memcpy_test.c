/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:22:22 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:35:44 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_memcpy()
{
	char *src;
	char dest[10];
	char dest2[10];

	src = "TesteTest";
	ft_memcpy(dest, src, 10);
	memcpy(dest2, src, 10);
	if (*dest == *dest2)
	{
		printf("Value in dest (my function): %s\n", dest);
		printf("Value in dest (original function): %s\n", dest2);
		printf("ft_memcpy test 1 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", dest);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("ft_memcpy test 1 failed.\n");
	}

	src = "Hello";
	ft_memcpy(dest, src, 5);
	memcpy(dest2, src, 5);
	if (*dest == *dest2)
	{
		printf("Value in dest (my function): %s\n", dest);
		printf("Value in dest (original function): %s\n", dest2);
		printf("ft_memcpy test 2 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", dest);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("ft_memcpy test 2 failed.\n");
	}
}

int	main(void)
{
	test_ft_memcpy();
	return (0);
}

