#include "libft.h"

int	strlen(char *c)
{
	int		counter;

	counter = 0;
	while (c[counter])
		counter++;
	return counter;
}

char	*strchr(char *s, char *c)
{
	char			result;
	unsigned int	counter;

	result = NULL;
	counter = 0;
	while(s[counter])
	{
		if (c == s[counter])
			result = &s[counter];
		counter++;
	}
	return result;
}

char	*strrchr(char *s, char *c)
{
	char	result;
	int		counter;

	result = NULL;
	counter = strlen(s);
	while(counter >= 0)
	{
		if (c == s[counter])
			result = &s[counter];
		counter--;
	}
	return result;
}

int	strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while(counter < n && s1[counter]-s2[counter] == 0 && s1[counter])
		counter++;
	return (unsigned char) s1[counter] - (unsigned char) s2[counter];
}

char	*strnstr(const char *haystack, const char *needle)
{
	unsigned int	c_haystack;
	unsigned int	c_needle;
	int				needle_length;
	
	needle_length = strlen(needle);
	c_haystack = 0;
	while(haystack[c_haystack])
	{
		c_needle = 0;
		while(needle[c_needle] && haystack[c_haystack + c_needle] == needle[c_needle])
			c_needle++;
		if(c_needle == needle_length)
			return &haystack[c_haystack];
		c_haystack++;
	}
	return NULL;
}

