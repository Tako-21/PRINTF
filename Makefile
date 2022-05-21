NAME = libftprintf.a

CC = gcc

SRCS = ft_utils.c ft_printf.c ft_idformat.c ft_idformat2.c

OBJS  =			${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

$(NAME) :		$(SRCS)
				ar -rcs $(NAME) $(OBJS)
clean :
				rm -rf $(OBJS)

fclean :		clean
				rm -rf $(NAME)

re : 			fclean $(NAME)


