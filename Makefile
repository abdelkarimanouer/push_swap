NAME = push_swap

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all : $(NAME)

$(NAME) : $(LIBFT)

$(LIBFT) :
	make -C $(LIBFT_DIR) bonus

clean :
	make -C $(LIBFT_DIR) clean

fclean : clean
	make -C $(LIBFT_DIR) fclean
	rm $(NAME)

re : fclean all

.PHONY : clean