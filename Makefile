NAME = libftprintf.a

CC = gcc

SRCS = ft_utils.c \
		ft_printf.c \
		ft_convert.c \
		ft_convert2.c \
		ft_parsing.c

CFLAGS = -g3 -Wall -Werror -Wextra

OBJS  =			$(SRCS:.c=.o)

all : $(NAME)

$(NAME) :		$(OBJS)
				ar -rcs $(NAME) $(OBJS)
				$(CC) $(OBJS) -o printf

clean :
				rm -rf $(OBJS)

fclean :		clean
				rm -rf $(NAME)

re : 			fclean $(NAME)
