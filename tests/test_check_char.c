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
static t_charset special_chars = { 9, "?/!\".,' _" };
static t_charset non_printable = {4, "\t\r\n\f"};

static void iter_charset(t_charset chset, int *expect, int (*f)(int))
{
	int buffres;
	for(int i = 0; i < chset.length; ++i)
	{
		buffres = f(chset.set[i]);
		if (expect[i] != buffres)
			printf("Error: Testing %c expecting %d, got %d, i = %d", chset.set[i], expect[i], buffres, i);
		assert(expect[i] == buffres);
	}
}

void	check_isalpha()
{
	int ex_lower[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[] = {0,0,0,0,0,0,0,0,0,0};
	int ex_special[] = {0,0,0,0,0,0,0,0};
	int ex_nonprint[4] = { 0 };
	printf("\nCheck isalpha\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, isalpha);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, isalpha);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, isalpha);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, isalpha);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, isalpha);
	assert(isalpha(200) == 0);
	assert(isalpha(254) == 0);
	assert(isalpha(128) == 0);
	assert(isalpha(150) == 0);
}
void	check_isdigit()
{
	int ex_lower[26] = {0};
	int ex_upper[26] = {0};
	int ex_digits[10] = { 1,1,1,1,1,1,1,1,1,1 };
	int ex_special[9] = { 0 };
	int ex_nonprint[4] = { 0 };
	printf("\nCheck isdigit\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, isdigit);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, isdigit);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, isdigit);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, isdigit);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, isdigit);
	assert(isdigit(200) == 0);
	assert(isdigit(254) == 0);
	assert(isdigit(128) == 0);
	assert(isdigit(150) == 0);
}
void	check_isalnum()
{
	int ex_lower[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[10] = {1,1,1,1,1,1,1,1,1,1};
	int ex_special[9] = { 0 };
	int ex_nonprint[4] = { 0 };
	printf("\nCheck isalnum\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, isalnum);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, isalnum);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, isalnum);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, isalnum);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, isalnum);
	assert(isalnum(200) == 0);
	assert(isalnum(254) == 0);
	assert(isalnum(128) == 0);
	assert(isalnum(150) == 0);
}
void	check_isascii()
{
	int ex_lower[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[10] = {1,1,1,1,1,1,1,1,1,1};
	int ex_special[9] = {1,1,1,1,1,1,1,1,1};
	int ex_nonprint[4] = {1,1,1,1};
	printf("\nCheck isascii\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, isascii);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, isascii);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, isascii);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, isascii);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, isascii);
	assert(isascii(200) == 0);
	assert(isascii(254) == 0);
	assert(isascii(128) == 0);
	assert(isascii(150) == 0);
}
void	check_isprint()
{
	int ex_lower[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[10] = {1,1,1,1,1,1,1,1,1,1};
	int ex_special[9] = {1,1,1,1,1,1,1,1,1};
	int ex_nonprint[4] = {0};
	printf("\nCheck isprint\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, isprint);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, isprint);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, isprint);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, isprint);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, isprint);
	assert(isprint(200) == 0);
	assert(isprint(254) == 0);
	assert(isprint(128) == 0);
	assert(isprint(150) == 0);
}