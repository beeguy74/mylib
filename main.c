#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void* b, int c, size_t len);

int	main(void)
{
	void *str;
	int	c;

	c = 'a';
	str = malloc(sizeof(char) * 4);
	str = ft_memset(str, c, 3);
	printf("%s\n", (char*)str);
	return (0);
}
