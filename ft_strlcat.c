#include "head.h"

char	*ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = ft_strlen(dest);
	if (dest_size > i)
	{
		while (*src != '\0' && i < dest_size)
		{
			dest[i] = *src++;
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
