/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:56:17 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 20:59:25 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_tolower()
{
	int	result;

	result = ft_tolower(65);
	if (result == 97)
		printf("ft_tolower test 1 passed!\n");
	else
		printf("ft_tolower test 1 failed.\n");

	result = ft_tolower(79);
	if (result == 111)
		printf("ft_tolower test 2 passed!\n");
	else
		printf("ft_tolower test 2 failed.\n");

	result = ft_tolower(54);
	if (result == 54)
		printf("ft_tolower test 3 passed!\n");
	else
		printf("ft_tolower test 3 failed.\n");

	result = ft_tolower(32);
	if (result == 32)
		printf("ft_tolower test 4 passed!\n");
	else
		printf("ft_tolower test 4 failed.\n");
}

int	main(void)
{
	test_ft_tolower();
	return (0);
}
