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

int isalpha(int c);
int isdigit(int c);
int isalnum(int c);		//is alphanumeric
int isascii(int c);
int isprint(int c);
int strlen(int c);
int toupper(int c);
int tolower(int c);
int strchr();
int strrchr();
int strncmp();
int memchr();
int memcmp();
int strnstr();
int atoi();
void *memset(void *b int c, unsigned int length);
void bzero(void *s, unsigned int length);
void *memcpy();
strlcpy();
strlcat();
void *memmove(void *dst, const void *src, unsigned int length);
