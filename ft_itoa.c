/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:31:46 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 22:16:25 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	get_size(unsigned int n)
{
	size_t	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

//static char	*rev_str(char *str)
//{
//	char	temp;
//	size_t	size;
//	size_t	i;
//
//	if (!str)
//		return NULL;
//	i = 0;
//	size = ft_strlen(str);
//	while (i < size / 2)
//	{
//		temp = str[i];
//		str[i] = str[size - i - 1];
//		str[size - i - 1] = temp;
//		i++;
//	}
//	return (str);
//}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	size_t			size;
	char			*str;
	int				is_neg;
	int				i;

	is_neg = n < 0;
	if (is_neg)
		nbr = (unsigned int)-n;
	else
		nbr = (unsigned int)n;
	size = get_size(nbr);
	str = (char *) malloc(size + is_neg + 1);
	if (!str)
		return (str);
	i = size + is_neg;
	str[i--] = '\0';
	while (i >= 0 + is_neg)
	{
		str[i--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

//int	main(void)
//{
//	char	*str;
//	
//	printf("=== Test 1 ===\n");
//	str = ft_itoa(0);
//	printf("Result: %s\n", str);
//
//	printf("=== Test 2 ===\n");
//	str = ft_itoa(12345);
//	printf("Result: %s\n", str);
//
//	printf("=== Test 3 ===\n");
//	str = ft_itoa(-12345);
//	printf("Result: %s\n", str);
//
//	printf("=== Test 4 ===\n");
//	str = ft_itoa(2147483647);
//	printf("Result: %s\n", str);
//
//	printf("=== Test 5 ===\n");
//	str = ft_itoa(-2147483648);
//	printf("Result: %s\n", str);
//
//	return (0);
//}
