#include <assert.h>
#include <stdio.h>
#include <libc.h>
#include "../libft.h"

void test_memchr(const void *s, int c, unsigned long n)
{
	if(memchr(s, c, n) != ft_memchr(s,c,n))
	{
		printf("Error with memchr, expected: %d, Got %d\n", memchr(s, c, n), ft_memchr(s,c,n));
		assert(0)
	}
}
void test_memcmp(const void *s1, const void *s2, unsigned long n)
{
	if(memcmp(s1, s2, n) != ft_memcmp(s1,s2,n))
	{
		printf("Error with memchr, expected: %d, Got %d\n", memcmp(s1,s2,n), ft_memcmp(s1,s2,n));
		assert(0);
	}
}
void test_memset(void *s, int c, unsigned long n)
{
	if(memcmp(memset(s,c,n), ft_memset(s,c,n), n) != 0)
	{
		printf("Error with memchr, expected: %d, Got %d\n",memcmp(memset(s,c,n), ft_memcmp(memset(s,c,n));
		assert(0);
	}
}
void test_memcpy(const void *src, unsigned long n)
{
	void *dest1 = malloc(n+1);
	void *dest2 = malloc(n+1);

	memcpy(dest1,src,n);
	ft_memcpy(dest2,src,n);
	if(memcmp(dest1, dest2, n) != 0)
	{
		printf("Error with memchr, expected: %s, Got %s\n", dest1, dest2);
		assert(0);
	}
	free(dest1);
	free(dest2);
}
void test_memmove(const void *src, unsigned long n)
{
	void *dest1 = malloc(n+1);
	void *dest2 = malloc(n+1);

	memmove(dest1,src,n);
	ft_memmove(dest2,src,n);
	if(memcmp(dest1, dest2, n) != 0)
	{
		printf("Error with memchr, expected: %s, Got %s\n", dest1, dest2);
		assert(0);
	}
	free(dest1);
	free(dest2);
}

void test_calloc(unsigned int count, unsigned int size)
{
	char *mem1 = calloc(count, size);
	char *mem2 = calloc(count, size);
	if(memcmp(mem1, mem2, count*size) != 0)
	{
		printf("Error with calloc, memcmp failed.\n");
		assert(0);
	}
	memset(mem1,10, count*size);
	memset(mem2,10, count*size);
	if(memcmp(mem1, mem2, count*size) != 0)
	{
		printf("Error with calloc, memset failed.\n");
		assert(0);
	}
	free(mem1);
	free(mem2);
}