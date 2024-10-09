

#include "libft.h"
#include "stdlib.h"

void *ft_calloc(unsigned int count, unsigned int size)
{
	char *data = malloc(count*size);
	if(data == NULL)
		return NULL;
	ft_memset(data, 0, count*size);
	return data;
}