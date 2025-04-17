/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:11:43 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/10 20:43:30 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strlcat()
{
	size_t	size;
	size_t	size2;
	char	src[10];
	char	dest[10] = "Test";
	char	dest2[10] = "Test";

	ft_strlcpy(src, "Test", 10);
	size = ft_strlcat(dest, src, 2);
	size2 = strlcat(dest2, src, 2);

	if (ft_strncmp(dest, dest2, 10) == 0 && size == size2)
	{
		printf("Value in dest(my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in dest(original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcat test 1 passed!\n");
	}
	else
	{
		printf("Value in pointer (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcat test 1 failed.\n");
	}

	ft_strlcpy(dest, "", 10);
	ft_strlcpy(dest2, "", 10);
	size = ft_strlcat(dest, src, 10);
	size2 = strlcat(dest2, src, 10);
	if (ft_strncmp(dest, dest2, 10) == 0 && size == size2)
	{
		printf("Value in src: %s\n", src);
		printf("Value in dest(my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in dest(original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcat test 2 passed!\n");
	}
	else
	{
		printf("Value in src: %s\n", src);
		printf("Value in pointer (my function): %s\n", dest);
		printf("Returned value (my function) %zu\n", size);
		printf("Value in pointer (original function): %s\n", dest2);
		printf("Returned value (original function) %zu\n", size2);
		printf("ft_strlcat test 2 failed.\n");
	}

	//dest = (char *) malloc(10);
	//dest2 = (char *) malloc(10);

	//strlcpy(dest, "", 1);
	//strlcpy(dest2, "", 1);

	//src = "TesteTesteTesteTeste";
	//size = ft_strlcat(dest, src, 20);
	//size2 = strlcat(dest2, src, 20);
	//if (*dest == *dest2 && size == size2)
	//{
	//	printf("Value in dest(my function): %s\n", dest);
	//	printf("Returned value (my function) %zu\n", size);
	//	printf("Value in dest(original function): %s\n", dest2);
	//	printf("Returned value (original function) %zu\n", size2);
	//	printf("ft_strlcat test 3 passed!\n");
	//}
	//else
	//{
	//	printf("Value in pointer (my function): %s\n", dest);
	//	printf("Returned value (my function) %zu\n", size);
	//	printf("Value in pointer (original function): %s\n", dest2);
	//	printf("Returned value (original function) %zu\n", size2);
	//	printf("ft_strlcat test 3 failed.\n");
	//}

	//dest = (char *) malloc(10);
	//dest2 = (char *) malloc(10);

	//strlcpy(dest, "", 1);
	//strlcpy(dest2, "", 1);

	//src = "TesteTesteTesteTeste";
	//size = ft_strlcat(dest, src, 5);
	//size2 = strlcat(dest2, src, 5);
	//if (*dest == *dest2 && size == size2)
	//{
	//	printf("Value in dest(my function): %s\n", dest);
	//	printf("Returned value (my function) %zu\n", size);
	//	printf("Value in dest(original function): %s\n", dest2);
	//	printf("Returned value (original function) %zu\n", size2);
	//	printf("ft_strlcat test 4 passed!\n");
	//}
	//else
	//{
	//	printf("Value in pointer (my function): %s\n", dest);
	//	printf("Returned value (my function) %zu\n", size);
	//	printf("Value in pointer (original function): %s\n", dest2);
	//	printf("Returned value (original function) %zu\n", size2);
	//	printf("ft_strlcat test 4 failed.\n");
	//}
}

int	main(void)
{
	test_ft_strlcat();
	return (0);
}
