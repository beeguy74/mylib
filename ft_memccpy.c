#include "head.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*res;
	int		i;

	i = 0;
	tmp = (unsigned char*)src;
	res = (unsigned char*)dest;
	while(i < n)
	{
		if (tmp[i] == c)
			return ((void*)&tmp[i + 1]);
		res[i] = tmp[i];
		i++;
	}
	return (NULL);
}
