/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:30:17 by afelger           #+#    #+#             */
/*   Updated: 2024/10/07 17:42:53 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef NULL
#	define NULL 0
# endif /* NULL */

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

/*	ft_check_char.c		*/
int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);

/*	ft_convert_char.c 	*/
int		toupper(int c);
int		tolower(int c);

/*	ft_str_crtl.c	*/
int		strlen(char *c);
char	*strchr(char *s, char *c);
char	*strrchr(char *s, char *c);
int		strncmp(const char *s1, const char *s2, unsigned int n);
char	*strnstr(const char *haystack, const char *needle);

/*	ft_str_change.c		*/
unsigned int	strlcpy(char *dst, const char *src, unsigned int dsize);
unsigned int	strlcat(char *dst, const char *src, unsigned int dsize);

/*	ft_mem_crtl.c		*/
void	*memchr(const void *s, int c, unsigned int n);
int		memcmp(const void *s1, const void *s2, unsigned int n);
void	*memset(void *s, int c, unsigned int n);
void	*memcpy(void *dest, const void *src, unsigned int n);
void	*memmove(void *dest, const void *src, unsigned int n);

calloc();
strdup();

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));

void ft_striteri(char *s, void (*f)(unsigned int,
char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

void	bzero(void *s, unsigned int length);
int		atoi();

# ifdef FLAG_BONUS
/*	ft_list.c	*/
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

/*	ft_list_crtl.c	*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));

/*	ft_list_apply.c	*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

# endif /* FLAG_BONUS */

#endif /* LIBFT_H */
