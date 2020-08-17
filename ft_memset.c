#include <stddef.h>

void	*ft_memset(void* b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = b;
	while(len--)
	{
		tmp[len] = c;
	}
	return (b);
}
