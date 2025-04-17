/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:45:13 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/10 19:34:55 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strncmp()
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "Teste1";
	str2 = "Teste1";

	result = ft_strncmp(str1, str2, 6);
	if (result == 0)
	{
		printf("ft_strncmp test 1 passed!\n");
		printf("Return value: %d\n", result); 
	}
	else
	{
		printf("ft_strncmp test 1 failed.\n");
		printf("Return value: %d\n", result); 
	}

	str1 = "Tes";
	str2 = "Teste1";
	result = ft_strncmp(str1, str2, 2);
	if (result == 0)
	{
		printf("ft_strncmp test 2 passed!\n");
		printf("Return value: %d\n", result); 
	}
	else
	{
		printf("ft_strncmp test 2 failed.\n");
		printf("Return value: %d\n", result); 
	}

	result = ft_strncmp(str1, str2, 4);
	if (result == -116)
	{
		printf("ft_strncmp test 3 passed!\n"); 
		printf("Return value: %d\n", result); 
	}
	else
	{
		printf("ft_strncmp test 3 failed.\n");
		printf("Return value: %d\n", result); 
	}
}

int	main(void)
{
	test_ft_strncmp();
	return (0);
}
