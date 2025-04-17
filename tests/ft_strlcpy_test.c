/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:58:43 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 18:42:00 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strlcpy()
{
	char *src;
	char dest[10];
	char dest2[10];
	size_t size;
	size_t size2;

	src = "TesteTest";
	size = ft_strlcpy(dest, src, 10);
	size2 = strlcpy(dest2, src, 10);
	if (*dest == *dest2)
	{
		printf("Value in dest (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in dest (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcpy test 1 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcpy test 1 failed.\n");
	}
	
	src = "HelloWorld!!!!!";
	size = ft_strlcpy(dest, src, 10);
	size2 = strlcpy(dest2, src, 10);
	if (*dest == *dest2)
	{
		printf("Value in dest (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in dest (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcpy test 2 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcpy test 2 failed.\n");
	}

	src = "Hello";
	size = ft_strlcpy(dest, src, 10);
	size2 = strlcpy(dest2, src, 10);
	if (*dest == *dest2)
	{
		printf("Value in dest (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in dest (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcpy test 2 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcpy test 2 failed.\n");
	}
}

int	main(void)
{
	test_ft_strlcpy();
	return (0);
}
