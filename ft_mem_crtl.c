#include "libft.h"

void	*memchr(const void *s, int c, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while ((char *) s[counter] != c && counter < n)
		counter++;
	return &s[counter];
}

int		memcmp(const void *s1, const void *s2, unsigned int n)
{
}

void	*memset(void *s, int c, unsigned int n)
{

}

void	*memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		((char *)dest)[counter] = ((char *)src)[counter];
		counter++;
	}
}

void	*memmove(void *dest, const void *src, unsigned int n)
{
	//OHNE MALLOC?
}
