/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:44:14 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:36:20 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isdigit()
{
	int	result;

	result = ft_isdigit('2');
	if (result == 1)
		printf("ft_isdigit test 1 passed\n");
	else
		printf("ft_isdigit test 1 failed: expected 1, got %d\n", result);

	result = ft_isdigit('8');
	if (result == 1)
		printf("ft_isdigit test 1 passed\n");
	else
		printf("ft_isdigit test 1 failed: expected 1, got %d\n", result);

	result = ft_isdigit('x');
	if (result == 0)
		printf("ft_isdigit test 1 passed\n");
	else
		printf("ft_isdigit test 1 failed: expected 1, got %d\n", result);

	result = ft_isdigit('*');
	if (result == 0)
		printf("ft_isdigit test 1 passed\n");
	else
		printf("ft_isdigit test 1 failed: expected 1, got %d\n", result);

	result = ft_isdigit('/');
	if (result == 0)
		printf("ft_isdigit test 1 passed\n");
	else
		printf("ft_isdigit test 1 failed: expected 1, got %d\n", result);

	result = ft_isdigit('A');
	if (result == 0)
		printf("ft_isdigit test 1 passed\n");
	else
		printf("ft_isdigit test 1 failed: expected 1, got %d\n", result);
}

int	main(void)
{
	test_ft_isdigit();
	return (0);
}
