/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:30:17 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:26:09 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

int				ft_toupper(int c);
int				ft_tolower(int c);

unsigned long	ft_strlen(const char *c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
unsigned long	ft_strncmp(const char *s1, const char *s2, unsigned long n);
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long n);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dsize);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dsize);

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
/*	ft_itoa.c	*/
char			*ft_itoa(int n);
/*	ft_atoi.c	*/
int				ft_atoi(const char *str);
/*	ft_mapi.c			*/
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*	ft_striteri.c			*/
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
/*	ft_bzero.c			*/
void			ft_bzero(void *s, unsigned int length);

/*	ft_put_fd.c			*/
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif /* LIBFT_H */
