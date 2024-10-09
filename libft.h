/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:30:17 by afelger           #+#    #+#             */
/*   Updated: 2024/10/09 16:31:03 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*	ft_check_char.c		*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

/*	ft_convert_char.c 	*/
int				ft_toupper(int c);
int				ft_tolower(int c);

/*	ft_str_crtl.c		*/
unsigned long	ft_strlen(const char *c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
unsigned long	ft_strncmp(const char *s1, const char *s2, unsigned long n);
char			*ft_strnstr(const char *haystack, const char *needle);

/*	ft_str_change.c		*/
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dsize);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dsize);

/*	ft_mem_crtl.c		*/
void			*ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
void			*ft_memset(void *s, int c, unsigned long n);
void			*ft_memcpy(void *dest, const void *src, unsigned long n);
void			*ft_memmove(void *dest, const void *src, unsigned long n);

/*	ft_calloc.c			*/
void			*ft_calloc(unsigned int count, unsigned int size);

/*	ft_str_new.c		*/
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start,
					unsigned int len);
char			*ft_strjoin(char const *s1, char const *s2);
/*	ft_strtrim.c 		*/
char			*ft_strtrim(char const *s1, char const *set);
/*	ft_split.c			*/
char			**ft_split(char const *s, char c);
/*	ft_cnv_numbers.c	*/
char			*ft_itoa(int n);
int				ft_atoi(const char *str);

/*	ft_iter.c			*/
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_bzero(void *s, unsigned int length);


/*	ft_put_fd.c			*/
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);


# ifdef FLAG_BONUS
/*	ft_list.c	*/
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);

/*	ft_list_crtl.c	*/
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));

/*	ft_list_apply.c	*/
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst,
					void *(*f)(void *), void (*del)(void *));

# endif /* FLAG_BONUS */

#endif /* LIBFT_H */
