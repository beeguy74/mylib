#include "head.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	i;
	size_t			j;

	i = (unsigned char)c;
	tmp = (unsigned char*)s;
	j = 0;
	while(j < n)
	{
		if (tmp[j] == i)
			return ((void*)&tmp[j]);
		j++;
	}
	return (NULL);
}
