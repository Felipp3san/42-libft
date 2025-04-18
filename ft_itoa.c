/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:31:46 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 14:52:21 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	get_size(int n)
{
	size_t	size;

	size = 0;
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char *ft_itoa(int n)
{
	unsigned int	nbr;
	size_t			size;
	char			*str;
	int				is_neg;
	int				i;

	is_neg = 0;
	nbr = (unsigned int)n;
	if (n < 0)
	{
		nbr = (unsigned int)-n;
		is_neg = 1;
	}
	str = (char *) malloc(get_size(n) + is_neg + 1);
	if (!str)
		return (str);
	i = 0;
	while (nbr % 10 > 10);
	{
		if (is_neg && i == 0)
			str[i] = '-';
		str[i + is_neg] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	str[i + is_neg] = '\0';
	return (str);
}

int	main(void)
{
	char	*str;
	
	printf("=== Test 1 ===\n");
	str = ft_itoa(12345);
	printf("Result: %s\n", str);

	printf("=== Test 2 ===\n");
	str = ft_itoa(-12345);
	printf("Result: %s\n", str);

	printf("=== Test 3 ===\n");
	str = ft_itoa(2147483647);
	printf("Result: %s\n", str);

	printf("=== Test 4 ===\n");
	str = ft_itoa(-2147483648);
	printf("Result: %s\n", str);

	return (0);
}
