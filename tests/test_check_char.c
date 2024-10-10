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

void	check_ft_isalpha()
{
	int ex_lower[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[] = {0,0,0,0,0,0,0,0,0,0};
	int ex_special[] = {0,0,0,0,0,0,0,0};
	int ex_nonprint[4] = { 0 };
	printf("\nCheck ft_isalpha\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, ft_isalpha);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, ft_isalpha);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, ft_isalpha);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, ft_isalpha);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, ft_isalpha);
	assert(ft_isalpha(200) == 0);
	assert(ft_isalpha(254) == 0);
	assert(ft_isalpha(128) == 0);
	assert(ft_isalpha(150) == 0);
}
void	check_ft_isdigit()
{
	int ex_lower[26] = {0};
	int ex_upper[26] = {0};
	int ex_digits[10] = { 1,1,1,1,1,1,1,1,1,1 };
	int ex_special[9] = { 0 };
	int ex_nonprint[4] = { 0 };
	printf("\nCheck ft_isdigit\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, ft_isdigit);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, ft_isdigit);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, ft_isdigit);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, ft_isdigit);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, ft_isdigit);
	assert(ft_isdigit(200) == 0);
	assert(ft_isdigit(254) == 0);
	assert(ft_isdigit(128) == 0);
	assert(ft_isdigit(150) == 0);
}
void	check_ft_isalnum()
{
	int ex_lower[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[10] = {1,1,1,1,1,1,1,1,1,1};
	int ex_special[9] = { 0 };
	int ex_nonprint[4] = { 0 };
	printf("\nCheck ft_isalnum\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, ft_isalnum);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, ft_isalnum);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, ft_isalnum);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, ft_isalnum);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, ft_isalnum);
	assert(ft_isalnum(200) == 0);
	assert(ft_isalnum(254) == 0);
	assert(ft_isalnum(128) == 0);
	assert(ft_isalnum(150) == 0);
}
void	check_ft_isascii()
{
	int ex_lower[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[10] = {1,1,1,1,1,1,1,1,1,1};
	int ex_special[9] = {1,1,1,1,1,1,1,1,1};
	int ex_nonprint[4] = {1,1,1,1};
	printf("\nCheck ft_isascii\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, ft_isascii);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, ft_isascii);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, ft_isascii);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, ft_isascii);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, ft_isascii);
	assert(ft_isascii(200) == 0);
	assert(ft_isascii(254) == 0);
	assert(ft_isascii(128) == 0);
	assert(ft_isascii(150) == 0);
}
void	check_ft_isprint()
{
	int ex_lower[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_upper[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int ex_digits[10] = {1,1,1,1,1,1,1,1,1,1};
	int ex_special[9] = {1,1,1,1,1,1,1,1,1};
	int ex_nonprint[4] = {0};
	printf("\nCheck ft_isprint\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, ex_lower, ft_isprint);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, ex_upper, ft_isprint);
	printf("Check letter_digits\n");
	iter_charset(digits, ex_digits, ft_isprint);
	printf("Check letter_special\n");
	iter_charset(special_chars, ex_special, ft_isprint);
	printf("Check letter_nonprint\n");
	iter_charset(non_printable, ex_nonprint, ft_isprint);
	assert(ft_isprint(200) == 0);
	assert(ft_isprint(254) == 0);
	assert(ft_isprint(128) == 0);
	assert(ft_isprint(150) == 0);
}