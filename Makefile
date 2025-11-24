NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
src = main.c

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF_DIR = ./ft_printf
PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

all : $(NAME)

$(NAME) : $(LIBFT) $(PRINTF)
	$(CC) $(FLAGS) main.c $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT) :
	make -C $(LIBFT_DIR) bonus

$(PRINTF) :
	make -C $(FT_PRINTF_DIR)

clean :
	make -C $(LIBFT_DIR) clean
	make -C $(FT_PRINTF_DIR) clean

fclean : clean
	make -C $(LIBFT_DIR) fclean
	make -C $(FT_PRINTF_DIR) fclean
	rm $(NAME)

re : fclean all

.PHONY : clean