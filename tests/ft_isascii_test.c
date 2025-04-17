/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:28:16 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:35:32 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_isascii()
{
	int	result;

	result = ft_isascii(0x4d);
	if(result == 1)
		printf("ft_isascii test 1 passed\n");
	else
		printf("ft_isascii test 1 failed: expected 1, got %d\n", result);

	result = ft_isascii(0x70);
	if(result == 1)
		printf("ft_isascii test 2 passed\n");
	else
		printf("ft_isascii test 2 failed: expected 1, got %d\n", result);

	result = ft_isascii(0x80);
	if(result == 0)
		printf("ft_isascii test 3 passed\n");
	else
		printf("ft_isascii test 3 failed: expected 0, got %d\n", result);

	result = ft_isascii(0x12);
	if(result == 1)
		printf("ft_isascii test 4 passed\n");
	else
		printf("ft_isascii test 4 failed: expected 1, got %d\n", result);

	result = ft_isascii(0x93);
	if(result == 0)
		printf("ft_isascii test 5 passed\n");
	else
		printf("ft_isascii test 5 failed: expected 0, got %d\n", result);
}

int	main()
{
	test_ft_isascii();
	return (0);
}
