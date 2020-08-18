#include <stddef.h>

void	*ft_bzero(void* b, size_t len)
{
	unsigned char	*tmp;

	tmp = b;
	while(len--)
	{
		tmp[len] = 0;
	}
	return (b);
}
