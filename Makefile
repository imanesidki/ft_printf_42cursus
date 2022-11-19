NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

sources = ft_printf.c ft_printf_opt.c

objet = $(sources:%.c=%.o)

all: $(NAME)

$(NAME): $(objet)
	@ar -rc $(NAME) $(objet)

%.o : %.c libftprintf.h
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(objet) $(objet_bonus)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re all
