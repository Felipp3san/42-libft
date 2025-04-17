/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:16:26 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:34:54 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_memset()
{
	const int	SIZE = 10;
	char str[] = "TestTest1";
	char str2[] = "TestTest2";

	if (*(unsigned char *) ft_memset(str, 'A', (SIZE - 1)) == 
			*(unsigned char *) memset(str2, 'A', (SIZE - 1)))
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_memset test 1 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_memset test 1 failed.\n");
	}

	if (*(unsigned char *) ft_memset(str, 78, (SIZE - 1)) == 
			*(unsigned char *) memset(str2, 78, (SIZE - 1)))
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_memset test 2 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_memset test 2 failed.\n");
	}

	ft_memset(str, '0', (SIZE - 1));
	memset(str2, '0', (SIZE - 1));

	if (*(unsigned char *) ft_memset(str, 92, (SIZE / 2)) == 
			*(unsigned char *) memset(str2, 92, (SIZE / 2)))
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_memset test 3 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", str);
		printf("Value in pointer (original function): %s\n", str2);
		printf("ft_memset test 3 failed.\n");
	}
}

int	main()
{
	test_ft_memset();
	return (0); 
}
