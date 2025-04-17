/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:25:03 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/11 20:39:12 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_atoi()
{
	char	str[20] = "    +1393ds 92a";
	int		original;
	int		ft;

	// TEST 1
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 1 passed!\n");
	else
		printf("ft_atoi test 1 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");

	// TEST 2
	ft_strlcpy(str, "12345", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 2 passed!\n");
	else
		printf("ft_atoi test 2 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");

	// TEST 3
	ft_strlcpy(str, "", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 3 passed!\n");
	else
		printf("ft_atoi test 3 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");

	// TEST 4
	ft_strlcpy(str, "    --+929931", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 4 passed!\n");
	else
		printf("ft_atoi test 4 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");

	// TEST 5
	ft_strlcpy(str, "-2147483648", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 5 passed!\n");
	else
		printf("ft_atoi test 5 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");

	// TEST 6
	ft_strlcpy(str, "2147483647", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 6 passed!\n");
	else
		printf("ft_atoi test 6 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");

	// TEST 7
	ft_strlcpy(str, "21474836471", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft == original)
		printf("ft_atoi test 7 passed!\n");
	else
		printf("ft_atoi test 7 failed.\n");
	printf("Original: %d\n", original);
	printf("ft_atoi: %d\n", ft);
	printf("\n");
}

int	main()
{
	test_ft_atoi();
	return (0);
}
