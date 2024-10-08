#include <assert.h>
#include "../libft.h"

const char *letters_lower = "abcdefghijklmnopqrstuvwxyz";
const char *letters_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char *digits = "1234567890";
const char *special_chars = "?/§$%!\"'";
const char *non_printable = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,1 1, 12 ,13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 127};

int	check_isalpha()
{
	for (int i = 0; i < 26 i++)
	{
		assert(isalpha(letters_lower[i]));
		assert(isalpha(letters_upper[i]));
	}
	assert(isalpha(127) == 0);
}
int	check_isdigit(int c)
{
	assert(0);
}
int	check_isalnum(int c)
{
	assert(0);
}
int	check_isascii(int c)
{
	assert(0);
}
int	check_isprint(int c)
{
	assert(0);
}