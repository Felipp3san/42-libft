/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:03:22 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 14:03:34 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	print_arr(char	**arr)
{
	printf("[");
	while (*arr != NULL)
	{
		printf("\"%s\"", *arr);
		if (*(arr + 1) != NULL)
			printf(",");
		arr++;
	}
	printf("]\n");
}

int	main(void)
{
	char	**arr;
	char	*str;
	char	ch;

	printf("=== Test 1 ===\n");
	str = "Split this word into multiple words";
	ch = 32;
	arr = ft_split(str, ch);
	print_arr(arr);

	printf("=== Test 2 ===\n");
	str = "Split this word into multiple words";
	ch = 0;
	arr = ft_split(str, ch);
	print_arr(arr);

	printf("=== Test 3 ===\n");
	str = "";
	ch = 32;
	arr = ft_split(str, ch);
	print_arr(arr);

	printf("=== Test 4 ===\n");
	str = "Split this word into multiple words";
	ch = 'i';
	arr = ft_split(str, ch);
	print_arr(arr);

	printf("=== Test 5 ===\n");
	str = NULL;
	ch = ' ';
	arr = ft_split(str, ch);
	print_arr(arr);

	return (0);
}
