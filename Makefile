SRCS	=	ft_char_type.c ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c\
			ft_scan_type.c ft_str_type.c ft_dec_type.c ft_int_type.c\
			ft_unsignint_type.c ft_pointer_type.c ft_low_hexa_type.c\
			ft_up_hexa_type.c ft_percent_type.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

NAME	=	libftprintf.a

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
