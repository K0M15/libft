#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

typedef struct 
{
	char const *s;
	char (*f)(unsigned int, char);
	char *expected;
} test_strmapi;


void test_ft_strmapi(test_strmapi *vals)
{
	int count = 0;
	while(vals[count].s)
	{
		char *res = ft_strmapi(vals[count].s, vals[count].f);
		if(strcmp(res, vals[count].expected) != 0)
		{
			printf("Failed strmapi, got %s, expected %s$", res, vals[count].expected);
			assert(0);
		}
		free(res);
	}
}
typedef struct 
{
	char *s;
	void (*f)(unsigned int, char);
	char *expected;
} test_striteri;


void test_ft_striteri(test_striteri *vals)
{
	int count = 0;
	while(vals[count].s)
	{
		ft_striteri(vals[count].s, vals[count].f);
		if(strcmp(vals[count].s, vals[count].expected) != 0)
		{
			printf("Failed striteri, got %s, expected %s$\n", vals[count].s, vals[count].expected);
			assert(0);
		}
	}
}

void test_bzero(void *s, unsigned int length)
{
	char *s1 = strndup((char *)s, length);
	char *s2 = strndup((char *)s, length);
	bzero(s1, length);
	ft_bzero(s2, length);
	if(memcmp(s1, s2, length) != 0)
	{
		printf("Failed memcmp of bzero\n");
		assert(0);
	}
	free(s1);
	free(s2);
}