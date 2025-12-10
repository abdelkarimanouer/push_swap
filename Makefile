NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c ft_atoi.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c fill_stack.c handle_get_input.c \
sa_sb_ss.c pa_pb.c ra_rb_rr.c rra_rrb_rrr.c sorting_small_cases.c find_and_search.c 
OBJ = $(SRC:%.c=%.o)
INC = push_swap.h

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean