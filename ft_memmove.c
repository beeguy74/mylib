#include "head.h" 

void	*ft_memmove(void* dest, const void *src, size_t len)
{
	unsigned char	*srt;
	unsigned char	*tmp;
	unsigned char	*res;
	size_t		i;

	i = len;
	srt = (unsigned char*)src;
	res = (unsigned char*)dest;
	if (len == 0 || src == dest)
	{
		return (dest);
	}
	tmp = (unsigned char*)malloc(sizeof(char) * len);
	if (!srt)
		return (NULL);
	while(i--)
	{
		tmp[i] = srt[i];
	}
	while(len--)
	{
		res[len] = tmp[len];
	}
	free(tmp);
	return (dest);
}
