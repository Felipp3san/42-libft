#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

int	main(void)
{
	char	buffer[10];
	char	*src;
	char	*buff;
	size_t	i;

	src = "Copy this string";
	buffer[0] = 'F';
	buffer[1] = 's';
	buffer[2] = '\0';
	printf("Original function: %lu\n", strlcpy(buffer, src, 0));

//	src = "";
//	printf("My function: %lu\n", ft_strlcpy(buffer3, src, sizeof(buffer2)));
//	printf("Original function: %lu\n", strlcpy(buffer3, src, sizeof(buffer2)));
//
//	src = "Test";
//	printf("My function: %lu\n", ft_strlcpy(buffer3, src, sizeof(buffer3)));
//	printf("Original function: %lu\n", strlcpy(buffer3, src, sizeof(buffer3)));

	return (0);
}
