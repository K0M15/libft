#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"


void test_ft_strdup(const char *s1)
{
	char *res1 = strdup(s1);
	char *res2 = ft_strdup(s1);
	if(strcmp(res1, res2) != 0)
	{
		printf("Failed strdup");
		assert(0);
	}
}
typedef struct {
	char 			*str;
	unsigned int 	start;
	unsigned int	length;
	char 			*expected;
} substr_case;

void test_ft_substr(substr_case *vals)
{
	int count = 0;
	while(vals[count].str)
	{
		char *res = ft_substr(vals[count].str, vals[count].start, vals[count].length);
		if(strcmp(res, vals[count].expected) != 0)
		{
			printf("Failed substr, got %s, expected %s$", res, vals[count].expected);
			assert(0);
		}
		free(res);
	}

}

typedef struct {
	char *str1;
	char *str2;
	char *expected;
} strjoin_case;

void test_ft_strjoin(strjoin_case *vals)
{
	int count = 0;
	while(vals[count].str1)
	{
		char *res = ft_strjoin(vals[count].str1, vals[count].str2);
		if(strcmp(res, vals[count].expected) != 0)
		{
			printf("Failed strjoin, got %s, expected %s$", res, vals[count].expected);
			assert(0);
		}
		free(res);
	}
}

typedef struct {
	char *s1;
	char *set;
	char *expected;
} strtrim_case;

void test_ft_strtrim(strtrim_case *vals)
{
	int count = 0;
	while(vals[count].s1)
	{
		char *res = ft_strtrim(vals[count].s1, vals[count].set);
		if(strcmp(res, vals[count].expected) != 0)
		{
			printf("Failed strtrim, got %s, expected %s$", res, vals[count].expected);
			assert(0);
		}
		free(res);
	}
}
typedef struct {
	char *s;
	char c;
	char *expected;
} split_case;

void test_ft_split(split_case *vals)
{
	int count = 0;
	while(vals[count].s)
	{
		char **res = ft_split(vals[count].s, vals[count].c);
		if(strcmp(res, vals[count].expected) != 0)
		{
			printf("Failed split, got %s, expected %s$", res, vals[count].expected);
			assert(0);
		}
		free(res);
	}
}

typedef struct {
	int i;
	char *expected;
} itoa_case;

void test_ft_itoa(itoa_case *vals)
{
	int count = 0;
	while(vals[count].expected && vals[count].i)
	{
		char *res = ft_itoa(vals[count].i);
		if(strcmp(res, vals[count].expected) != 0)
		{
			printf("Failed itoa, got %s, expected %s$", res, vals[count].expected);
			assert(0);
		}
		free(res);
	}
}

void test_ft_atoi(char *str)
{
	if(atoi(str) != ft_atoi(str))
	{
		printf("Failed atoi, got %d, expected %d$", atoi(str), ft_atoi(str));
		assert(0);
	}
}