#include "head.h"

char	*ft_strdup(const char *str)
{
	int	i;
	char	*res;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	res = (char*)malloc(sizeof(char) * (++i));
	res[i] = '\0';
	while (i--)
	{
		res[i] = str[i];
	}
	return (res);
}
