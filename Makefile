NAME	=	libftprintf.a

SRC		=	ft_print_char.c	ft_print_num.c	ft_print_str.c\
			ft_print_unum.c	ft_print_hexs.c	ft_print_hexl.c\
			ft_print_pntr.c	ft_printf.c


HEADER	=	ft_printf.h

OBJ		=	$(SRC:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ) ./a.out

fclean	:	clean
	@rm -f $(NAME)

re		: fclean all

out		:
	@$(CC) $(CFLAGS) $(SRC) && ./a.out