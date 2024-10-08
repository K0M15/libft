#include "libft.h"

unsigned int	strlcpy(char *dst, const char *src, unsigned int dsize)
{
	unsigned int	counter;
	
	counter = 0;
	while(counter < dsize && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	return dsize;
}

unsigned int	strlcat(char *dst, const char *src, unsigned int dsize)
{
	unsigned int src_ctr;
	unsigned int dst_ctr;

	src_ctr = 0;
	dst_ctr = strlen(dst_ctr);
	while(dst_ctr < dsize && src[src_ctr])
	{
		dst[dst_ctr] = src[src_ctr];
		dst_ctr++;
		src_ctr++;
	}
	return dsize;
}
