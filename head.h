#ifndef HEAD_H
# define HEAD_H

#include <stddef.h>
#include <stdlib.h>

void	*ft_bzero(void* b, size_t len);
void	*ft_memcpy(void* dest, const void *src, size_t len);
void	*ft_memset(void* b, int c, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void* dest, const void *src, size_t len);
void	*ft_memchr(void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen(char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);

#endif
