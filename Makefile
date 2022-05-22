NAME = libftprintf.a

CC = gcc

SRCS = srcs/ft_utils.c \
		srcs/ft_printf.c \
		srcs/ft_convert.c \
		srcs/ft_convert2.c \
		srcs/ft_parsing.c

# CFLAGS = -Wall -Werror -Wextra

OBJS  =			$(SRCS:.c=.o)

all : $(NAME)

$(NAME) :		$(OBJS)
				$(CC) $(OBJS) -o printf
# ar -rcs $(NAME) $(OBJS)
clean :
				rm -rf $(OBJS)

fclean :		clean
				rm -rf $(NAME)

re : 			fclean $(NAME)
