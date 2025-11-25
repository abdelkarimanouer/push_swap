#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct st_linked_list
{
	int	data;
	struct st_linked_list *prev;
	struct st_linked_list *next;
}	linked_list;


int	ft_atoi(const char *str, int *failed);

#endif