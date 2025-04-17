/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:52:50 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 20:59:11 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_toupper()
{
	int	result;

	result = ft_toupper(97);
	if (result == 65)
		printf("ft_toupper test 1 passed!\n");
	else
		printf("ft_toupper test 1 failed.\n");

	result = ft_toupper(111);
	if (result == 79)
		printf("ft_toupper test 2 passed!\n");
	else
		printf("ft_toupper test 2 failed.\n");

	result = ft_toupper(54);
	if (result == 54)
		printf("ft_toupper test 3 passed!\n");
	else
		printf("ft_toupper test 3 failed.\n");

	result = ft_toupper(32);
	if (result == 32)
		printf("ft_toupper test 4 passed!\n");
	else
		printf("ft_toupper test 4 failed.\n");
}

int	main(void)
{
	test_ft_toupper();
	return (0);
}
