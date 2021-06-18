CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBFT = ../libft_42/libft.a
SRC_PATH = ./src
LIB_PATH = ../libft_42
OBJ_PATH = ./objs

SRC_NAME = flag_sorting.c ft_printf.c initialize_flags.c \
print_integer.c print_string.c variable_sorting.c ft_putstr.c \
print_character.c print_hexadecimal.c print_ptr.c print_percentage.c \
print_unsigned.c print_charxtimes.c \
check_width.c check_precision.c check_zero.c

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJ_PATH)/,$(OBJLIB_NAME))

all: $(NAME) lib

$(NAME): $(OBJ) $(OBJLIB)
	@ar rc $(NAME) $(OBJ) $(OBJLIB)
	@ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

lib:
	@if make -C $(LIB_PATH) 2> /dev/null; then \
		echo ""; \
	else \
		echo Error, no existe la LIBFT, asugerse que exite ../libft_42/libft.a; \
	fi

compile:
	@gcc -g $(SRC) $(LIBFT) src/main.c

clean:
	@rm -rf $(OBJ) $(OBJLIB)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(OBJ_PATH)

re: fclean all

.PHONY: fclean clean re
