#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size - 1)
		return (size + src_len);
	i = 0;
	while (i < (size - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

int	main(void)
{
	char	buffer[10] = "Concat";
	char	buffer2[10] = "Concat";
	char	buffer3[13] = "";
	char	buffer4[13] = "";

	char	str[] = " This string";

	printf("My function: %lu Result: %s\n", ft_strlcat(buffer, str,
	sizeof(buffer)), buffer);

	printf("Original: %lu Result: %s\n", strlcat(buffer2, str, sizeof(buffer2)),
	buffer2);

	printf("My function: %lu Result: %s\n", ft_strlcat(buffer3, str, sizeof(buffer3)),
	buffer3);

	printf("Original: %lu Result: %s\n", strlcat(buffer4, str, sizeof(buffer4)),
	buffer4);

	return (0);
}
