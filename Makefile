NAME = libftprintf.a

CC = gcc

SRCS = ft_utils.c ft_printf.c ft_convert.c ft_convert2.c ft_parsing.c

# OBJS  =			$(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :		$(OBJS)
				$(CC) $(SRCS)
# ar -rcs $(NAME) $(OBJS)
clean :
				rm -rf $(OBJS)

fclean :		clean
				rm -rf $(NAME)

re : 			fclean $(NAME)
