/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:55:50 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:34:18 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isalpha()
{
	int	result;

	result = ft_isalpha('A');
	if (result == 1)
		printf("ft_isalpha test 1 passed\n");
	else
		printf("ft_isalpha test 1 failed: expected 1, got %d\n", result);

	result = ft_isalpha('a');
	if (result == 1)
		printf("ft_isalpha test 2 passed \n");
	else
		printf("ft_isalpha test 2 failed: expected 1, got %d\n", result);

	result = ft_isalpha('Z');
	if (result == 1)
		printf("ft_isalpha test 3 passed \n");
	else
		printf("ft_isalpha test 3 failed: expected 1, got %d\n", result);

	result = ft_isalpha('z');
	if (result == 1)
		printf("ft_isalpha test 4 passed \n");
	else
		printf("ft_isalpha test 4 failed: expected 1, got %d\n", result);

	result = ft_isalpha('^');
	if (result == 0)
		printf("ft_isalpha test 5 passed \n");
	else
		printf("ft_isalpha test 5 failed: expected 1, got %d\n", result);

	result = ft_isalpha('[');
	if (result == 0)
		printf("ft_isalpha test 6 passed \n");
	else
		printf("ft_isalpha test 6 failed: expected 1, got %d\n", result);

	result = ft_isalpha('8');
	if (result == 0)
		printf("ft_isalpha test 7 passed \n");
	else
		printf("ft_isalpha test 7 failed: expected 1, got %d\n", result);
}

int	main()
{
	test_ft_isalpha();
	return (0);
}
