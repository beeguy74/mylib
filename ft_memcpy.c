#include "head.h" 

void	*ft_memcpy(void* dest, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*res;

	tmp = (unsigned char*)src;
	res = (unsigned char*)dest;
	if (len == 0 || src == dest)
	{
		return (dest);
	}
	while(len--)
	{
		res[len] = tmp[len];
	}
	return (dest);
}
