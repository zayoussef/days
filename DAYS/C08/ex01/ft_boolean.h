#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN( nbr ) (nbr % 2 == 0) ? 1 : 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an add number of arguments.\n"
# define SUCCESS 0

typedef int		t_bool;

#endif
