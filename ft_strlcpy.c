#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (src_len > 0)
	{
		i = 0;
		while (i < size - 1 && i < src_len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

int	main(void)
{
	char	buffer[17];
	char	buffer2[10];
	char	buffer3[10];
	char	*src;

	src = "Copy this string";
	printf("My function: %lu\n", ft_strlcpy(buffer, src, sizeof(buffer)));
	printf("Original function: %lu\n", strlcpy(buffer, src, sizeof(buffer)));
	
	printf("My function: %lu\n", ft_strlcpy(buffer, src, sizeof(buffer2)));
	printf("Original function: %lu\n", strlcpy(buffer, src, sizeof(buffer2)));

	src = "";
	printf("My function: %lu\n", ft_strlcpy(buffer3, src, sizeof(buffer2)));
	printf("Original function: %lu\n", strlcpy(buffer3, src, sizeof(buffer2)));

	src = "Test";
	printf("My function: %lu\n", ft_strlcpy(buffer3, src, sizeof(buffer3)));
	printf("Original function: %lu\n", strlcpy(buffer3, src, sizeof(buffer3)));

	return (0);
}
