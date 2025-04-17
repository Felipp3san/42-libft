/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:11:43 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/17 18:12:26 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	char	buffer[10];
	char	*str;

	str = " This string";
	// Test 1
	printf("=== Test 1 ===\n");
	ft_strlcpy(buffer, "Concat", 10);
	printf("My function: %lu Result: %s\n", ft_strlcat(buffer, str, sizeof(buffer)), buffer);
	ft_strlcpy(buffer, "Concat", 10);
	printf("Original: %lu Result: %s\n", strlcat(buffer, str, sizeof(buffer)), buffer);

	// Test 2
	printf("=== Test 2 ===\n");
	ft_strlcpy(buffer, "", 10);
	printf("My function: %lu Result: %s\n", ft_strlcat(buffer, str, sizeof(buffer)), buffer);
	ft_strlcpy(buffer, "", 10);
	printf("Original: %lu Result: %s\n", strlcat(buffer, str, sizeof(buffer)), buffer);

	// Test 3
	printf("=== Test 3 ===\n");
	ft_strlcpy(buffer, "Test 3", 10);
	printf("My function: %lu Result: %s\n", ft_strlcat(buffer, str, 0), buffer);
	ft_strlcpy(buffer, "Test 3", 10);
	printf("Original: %lu Result: %s\n", strlcat(buffer, str, 0), buffer);

	// Test 4
	printf("=== Test 4 ===\n");
	ft_strlcpy(buffer, "1234567890", 10);
	printf("My function: %lu Result: %s\n", ft_strlcat(buffer, str, 1), buffer);
	ft_strlcpy(buffer, "1234567890", 10);
	printf("Original: %lu Result: %s\n", strlcat(buffer, str, 1), buffer);

	// Test 5
	printf("=== Test 5 ===\n");
	str = "123";
	ft_strlcpy(buffer, "", 1);
	printf("My function: %lu Result: %s\n", ft_strlcat(buffer, str, 1), buffer);
	ft_strlcpy(buffer, "", 1);
	printf("Original: %lu Result: %s\n", strlcat(buffer, str, 1), buffer);

	return (0);
}
