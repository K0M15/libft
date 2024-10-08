#include <assert.h>
#include <stdio.h>
#include "../libft.h"

typedef struct {
	int	length;
	char *set;
} t_charset;

static t_charset letters_lower = { 26,"abcdefghijklmnopqrstuvwxyz" };
static t_charset letters_upper =  { 26,"ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
static t_charset digits = { 10, "1234567890" };
// static t_charset special_chars = { 9, "?/!\".,' _" };
// static t_charset non_printable = {4, "\t\r\n\f"};

static void iter_charset(t_charset chset, int *expect, int (*f)(int))
{
	char buffres;
	for(int i = 0; i < chset.length; ++i)
	{
		buffres = (char)f(chset.set[i]);
		if (expect[i] != buffres)
			printf("Error: Testing %c expecting %d, got %d, i = %d", chset.set[i], expect[i], buffres, i);
		assert(expect[i] == buffres);
	}
}