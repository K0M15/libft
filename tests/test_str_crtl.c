#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void check_ft_str_crtl(char *str, char c, char *s2, int amount)
{
	if (strlen(str) != ft_strlen(str))
	{
		printf("Error with strlen, Exp: %lu, Got: %lu\n", strlen(str),ft_strlen(str));
		assert(0);
	}
	if(strcmp(strchr(str, c), ft_strchr(str, c)) != 0)
	{
		printf("Error with strchr , Exp:%s, Got %s$\n", strchr(str, c), ft_strchr(str, c));
	}
	if(strcmp(strrchr(str, c), ft_strrchr(str, c)) != 0)
	{
		printf("Error with strrchr , Exp:%s, Got %s$\n", strrchr(str, c), ft_strrchr(str, c));
	}
	if(strncmp(str, s2, amount) != ft_strncmp(str, s2, amount))
	{
		printf("Error with strncmp , Exp:%d, Got %d\n", strncmp(str, s2, amount), ft_strncmp(str, s2, amount));
	}
	if(strcmp(strnstr(str, c, amount), ft_strnstr(str, &c, amount)) != 0)
	{
		printf("Error with strnstr , Exp:%s, Got %s\n", strnstr(str, c, amount), ft_strnstr(str, c, amount));
	}
}

void check_ft_strlcpy(char *str, int amount)
{
	char *dst1;
	char *dst2;
	dst1 = calloc(1, amount+100);
	dst2 = calloc(1, amount+100);
	strlcpy(dst1, str, amount);
	ft_strlcpy(dst2, str, amount);
	if(strcmp(dst1, dst2) != 0)
	{
		printf("Error with strlcpy , Exp:\n%s\n, Got\n%s\n\n", dst1, dst2);
		assert(0);
	}
	free(dst1);
	free(dst2);
}

void check_ft_strlcat(char *str, int amount)
{
	char *dst1;
	char *dst2;
	dst1 = calloc(1, amount+amount+amount+100);
	dst2 = calloc(1, amount+amount+amount+100);
	strlcat(dst1, str, amount);
	strlcat(dst1, str, amount);
	strlcat(dst1, str, amount);
	ft_strlcpy(dst2, str, amount);
	ft_strlcpy(dst2, str, amount);
	ft_strlcpy(dst2, str, amount);
	{
		printf("Error with strlcpy , Exp:\n%s\n, Got\n%s\n\n", dst1, dst2);
		assert(0);
	}
	free(dst1);
	free(dst2);
}
