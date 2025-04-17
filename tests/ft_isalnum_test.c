/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 21:14:38 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:36:11 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_isalnum()
{
	int	result;

	result = ft_isalnum('A');
	if (result == 1)
		printf("ft_isalnum test 1 passed\n");
	else
		printf("ft_isalnum test 1 failed: expected 1, got %d\n", result);

	result = ft_isalnum('2');
	if (result == 1)
		printf("ft_isalnum test 2 passed\n");
	else
		printf("ft_isalnum test 2 failed: expected 1, got %d\n", result);

	result = ft_isalnum('@');
	if (result == 0)
		printf("ft_isalnum test 3 passed\n");
	else
		printf("ft_isalnum test 3 failed: expected 1, got %d\n", result);

	result = ft_isalnum('%');
	if (result == 0)
		printf("ft_isalnum test 4 passed\n");
	else
		printf("ft_isalnum test 4 failed: expected 1, got %d\n", result);

	result = ft_isalnum('(');
	if (result == 0)
		printf("ft_isalnum test 5 passed\n");
	else
		printf("ft_isalnum test 5 failed: expected 1, got %d\n", result);

	result = ft_isalnum('x');
	if (result == 1)
		printf("ft_isalnum test 6 passed\n");
	else
		printf("ft_isalnum test 6 failed: expected 1, got %d\n", result);
}

int	main()
{
	test_ft_isalnum();
	return (0);
}
