#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (nb >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}


-----------------------  C09  ----------------------

#!/bin/bash

cc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c
ar -rcs libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

ex01 : 
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
all : ${NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
.PHONY : all clean fclean re

ex02:
#include <stdlib.h>

char	*ft_add_word(char *src, int size)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *) malloc (sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		word_len = count_word_len(str + i, charset);
		if (word_len)
			j++;
		i += word_len;
		word_len = 0;
	}
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		word_len;
	int		count_word;
	char	**tab;

	count_word = ft_count_word(str, charset);
	tab = malloc(sizeof(char *) * (count_word + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		word_len = count_word_len(str + i, charset);
		if (word_len)
			tab[j++] = ft_add_word(str + i, word_len);
		i += word_len;
		word_len = 0;
	}
	tab[j] = 0;
	return (tab);
}
