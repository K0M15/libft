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

void	check_ft_toupper()
{
	int exp_lower[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int exp_digits[10] = {'1','2','3','4','5','6','7','8','9','0'};
	printf("\nCheck ft_toupper\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, exp_lower, ft_toupper);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, exp_lower, ft_toupper);
	printf("Check digits\n");
	iter_charset(digits, exp_digits, ft_toupper);
}

void	check_ft_tolower()
{
	int exp_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int exp_digits[10] = {'1','2','3','4','5','6','7','8','9','0'};
	printf("\nCheck ft_tolower\n");
	printf("Check letter_lower\n");
	iter_charset(letters_lower, exp_lower, ft_tolower);
	printf("Check letter_upper\n");
	iter_charset(letters_upper, exp_lower, ft_tolower);
	printf("Check digits\n");
	iter_charset(digits, exp_digits, ft_tolower);
}