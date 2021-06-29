CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC_PATH = ./src
LIB_PATH = ../libft_42
INC_PATH = ./src
OBJ_PATH = ./objs

LIB_NAME = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strchr.c \
ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
ft_strjoin.c ft_substr.c ft_split.c ft_strtrim.c ft_itoa.c \
ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_intlen.c ft_len.c \
ft_itoa_without_minus.c \
ft_putchar.c ft_strrev.c


SRC_NAME = flag_sorting.c ft_printf.c initialize_flags.c \
print_integer.c print_string.c variable_sorting.c ft_putstrcounter.c \
print_character.c print_hexadecimal.c print_ptr.c print_percentage.c \
print_unsigned.c print_charxtimes.c \
check_width.c check_precision.c check_zero.c
INC_NAME = printf.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJ_PATH)/,$(OBJLIB_NAME))

all: libft $(NAME)

libft:
	@make -C ../libft_42  > /dev/null
	@if [ ! -d $(LIB_PATH) ]; then \
		echo Error, no existe la libreria $(LIB_PATH) ; \
	fi

$(NAME): $(OBJ) $(OBJLIB)
	@ar rc $(NAME) $(OBJ) $(OBJLIB)
	@ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

$(OBJ_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<
compile:
	@gcc -g $(SRC) $(LIB) src/main.c

clean:
	@rm -rf $(OBJ) $(OBJLIB)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(OBJ_PATH)

re: fclean all

.PHONY: fclean clean re