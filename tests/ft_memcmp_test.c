/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:29:40 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 21:54:46 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_memcmp()
{
	char	str1[7] = "Teste1";
	char	str2[7] = "Teste1";
	int		result_ft;
	int		result;

	// TEST 1
	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);
	if (result_ft == result)
		printf("ft_memcmp test 1 passed!\n");
	else
		printf("ft_memcmp test 1 failed.\n");

	// TEST 2
	ft_strlcpy(str1, "Test", 7);

	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);
	if (result_ft < 0 && result < 0)
		printf("ft_memcmp test 2 passed!\n");
	else
		printf("ft_memcmp test 2 failed.\n");

	// TEST 3
	ft_strlcpy(str1, "", 7);
	ft_strlcpy(str2, "12345", 7);

	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);

	if (result_ft < 0 && result < 0)
		printf("ft_memcmp test 3 passed!\n");
	else
		printf("ft_memcmp test 3 failed.\n");

	// TEST 4
	ft_strlcpy(str1, "", 7);
	ft_strlcpy(str2, "", 7);

	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);

	if (result_ft == result)
		printf("ft_memcmp test 4 passed!\n");
	else
		printf("ft_memcmp test 4 failed.\n");
}

int	main(void)
{
	test_ft_memcmp();
	return (0);
}

