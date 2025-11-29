NAME = push_swap
CC = cc
CFLAGS = 
SRC = main.c ft_atoi.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c fill_stack.c
OBJ = $(SRC:%.c=%.o)
INC = push_swap.h

FT_PRINTF_DIR = ./ft_printf
PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -o $(NAME)

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(PRINTF) :
	make -C $(FT_PRINTF_DIR)

clean :
	rm -f $(OBJ)
	make -C $(FT_PRINTF_DIR) clean

fclean : clean
	make -C $(FT_PRINTF_DIR) fclean
	rm -f $(NAME)

re : fclean all

.PHONY : clean