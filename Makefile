NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

SRCS = ft_printf.c \
	ft_check_format.c \
	ft_print_format.c \
	ft_print_csp.c \
	ft_print_nums.c \
	ft_print_char_len.c \
	ft_print_str.c \
	ft_print_hex.c \
	ft_print_decimal.c \
	ft_print_mem.c \
	ft_print_signed.c \
	ft_print_unsigned_hex.c \
	ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all