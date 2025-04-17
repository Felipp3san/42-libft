/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:45:01 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:34:31 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_isprint()
{
	unsigned char	ch;

	ch = 0x12;
	if (!ft_isprint(ch) && !isprint(ch))
		printf("ft_isprint test 1 passed!\n");
	else
		printf("ft_isprint test 1 failed.\n");

	ch = 0x32;
	if (ft_isprint(ch) > 0 && isprint(ch) > 0)
		printf("ft_isprint test 2 passed!\n");
	else
		printf("ft_isprint test 2 failed.\n");

	ch = 0xEA;
	if (!ft_isprint(ch) && !isprint(ch))
		printf("ft_isprint test 3 passed!\n");
	else
		printf("ft_isprint test 3 failed.\n");

	ch = 0x20;
	if (ft_isprint(ch) && isprint(ch))
		printf("ft_isprint test 4 passed!\n");
	else
		printf("ft_isprint test 4 failed.\n");

	ch = 0x14;
	if (!ft_isprint(ch) && !isprint(ch))
		printf("ft_isprint test 5 passed!\n");
	else
		printf("ft_isprint test 5 failed.\n");

	ch = 0xC8;
	if (!ft_isprint(ch) && !isprint(ch))
		printf("ft_isprint test 6 passed!\n");
	else
		printf("ft_isprint test 6 failed.\n");
}

int	main(void)
{
	test_ft_isprint();
	return (0);
}
