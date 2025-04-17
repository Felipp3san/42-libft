/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:06:03 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 21:29:38 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strchr()
{
	char	*target;
	char	*located;

	target = "Test string";
	located = ft_strchr(target, 's');
	if (*located == 's')
	{
		printf("ft_toupper test 1 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_toupper test 1 failed.\n");

	located = ft_strchr(target, 'i');
	if (*located == 'i')
	{
		printf("ft_toupper test 2 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_toupper test 2 failed.\n");

	located = ft_strchr(target, 'T');
	if (*located == 'T')
	{
		printf("ft_toupper test 3 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_toupper test 3 failed.\n");

	located = ft_strchr(target, '\0');
	if (*located == '\0')
	{
		printf("ft_toupper test 4 passed!\n");
		printf("located char: %c\n", *located);
		printf("address: %p\n", located);
	}
	else
		printf("ft_toupper test 4 failed.\n");

	located = strchr(target, 'z');
	if (located == NULL)
	{
		printf("ft_toupper test 5 passed!\n");
		printf("located char: NULL\n");
		printf("address: NULL\n");
	}
	else
		printf("ft_toupper test 5 failed.\n");
}

int	main(void)
{
	test_ft_strchr();
	return (0);
}
