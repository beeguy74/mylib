#include <stdio.h>

void *ft_memset(void* str, int c, size_t m);

int	main(void)
{
	char	*str;
	int	c;

	c = 56;
	str = "Hello shorld!";
	str = ft_memset(str, c, 3);
	printf("%s\n", str);
	return (0);
}
