#include "libft.h"

int toupper(int c)
{
	if (c >= 'a')
		return c-' ';
	return c;
}

int tolower(int c)
{
	if (c <= 'Z')
		return c+' ';
	return c;
}
