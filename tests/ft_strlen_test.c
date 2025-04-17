/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:18:46 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 18:38:01 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strlen()
{
	char *str;
	
	str = "Teste";
	if (ft_strlen(str) == strlen(str))
		printf("ft_strlen test 1 passed!\n");
	else
		printf("ft_strlen test 1 failed.\n");

	str = "Hello world!";
	if (ft_strlen(str) == strlen(str))
		printf("ft_strlen test 1 passed!\n");
	else
		printf("ft_strlen test 1 failed.\n");

	str = "Big string test 12343 9csa0asdj 4992kjfd sas";
	if (ft_strlen(str) == strlen(str))
		printf("ft_strlen test 1 passed!\n");
	else
		printf("ft_strlen test 1 failed.\n");

	str = "";
	if (ft_strlen(str) == strlen(str))
		printf("ft_strlen test 1 passed!\n");
	else
		printf("ft_strlen test 1 failed.\n");
}

int	main()
{
	test_ft_strlen();
	return (0);
}
