#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>


int	ft_isalpha(int );
int	ft_isdigit(int );
int	ft_isalnum(int );
int	ft_isascii(int );
int	ft_isprint(int );
size_t	ft_strlen(const char *);
void	*ft_memset(void *, int, size_t);
void	ft_bzero(void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_memmove(void *, const void *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
size_t	ft_strlcat(char *, const char *, size_t);
int	ft_toupper(int );
int	ft_tolower(int );
char	*ft_strchr(const char *, int);
char	*ft_strrchr(const char *, int);
int	ft_strncmp(const char *, const char *, size_t);
void	*ft_memchr(const void *, int , size_t );
int	ft_memcmp(const void *, const void *, size_t);

char	*ft_strnstr(const char *, const char *, size_t);
int	ft_atoi(const char *);
void	*ft_calloc(size_t, size_t);
char	*ft_strdup(const char *);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);


typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
