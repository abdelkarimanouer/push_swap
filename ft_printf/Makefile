NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_put.c ft_put_hex.c
OBJ = $(SRC:%.c=%.o)
HEADERS = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean