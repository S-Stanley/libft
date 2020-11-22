/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:06:17 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:06:20 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_atoi(char *str);
void			ft_bzero(void *str, int n);
void			*ft_calloc(int count, int size);
int				ft_isalnum(unsigned char c);
int				ft_isalpha(char c);
int				ft_isdigit(char i);
int				ft_isascii(int c);
int				ft_isprint(unsigned char c);
void			*ft_memccpy(const void *src, const void *dest, int c, int size);
void			*ft_memchr(const void *s, int c0, int n);
int				*ft_memcmp(const void *s1, const void *s2, int n);
void			*ft_memcpy(void *dist, const void *src, int n);
void			*ft_memmove(void *dist, const void *src, int n);
void			*ft_memset(void *data, int to_write, int size);
char			*ft_strchr(const char *str, int c2);
char			*ft_strdup(char *str);
int				ft_strlcat(char *dest, char *str, int n);
int				ft_strlcpy(char *dest, char *str, int n);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, int n);
char			*ft_strnstr(char *str, char *to_find, int searchmax);
char			*ft_strrchr(const char *str, char c);
int				ft_tolower(int a);
int				ft_toupper(int a);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *));

#endif
