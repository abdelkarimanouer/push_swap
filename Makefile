NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = main.c ft_atoi.c
INC = utils.h

FT_PRINTF_DIR = ./ft_printf
PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

all : $(NAME)

$(NAME) : $(PRINTF) $(INC)
	$(CC) $(FLAGS) $(SRC) $(PRINTF) -o $(NAME)

$(PRINTF) :
	make -C $(FT_PRINTF_DIR)

clean :
	make -C $(FT_PRINTF_DIR) clean

fclean : clean
	make -C $(FT_PRINTF_DIR) fclean
	rm $(NAME)

re : fclean all

.PHONY : clean