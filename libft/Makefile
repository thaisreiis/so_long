NAME = libft.a

SOURCES = \
	free_matrix.c \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isnum.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_multi_strjoin.c \
	ft_printf_utils.c \
	ft_printf.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_base_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_str_empty.c \
	ft_str_is_num.c \
	ft_strchr.c \
	ft_strcpy.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	get_next_line.c

# Objetos em obj/
SRCOBJ   = obj/
OBJECTS  = $(SOURCES:.c=.o)
OBJ      = $(addprefix $(SRCOBJ), $(OBJECTS))

CC     = gcc
CFLAGS = -Wall -Wextra -Werror
RM     = rm -rf

# Compilar .c (em src/) para .o (em obj/), criando obj/ se preciso
$(SRCOBJ)%.o: src/%.c
	@mkdir -p $(SRCOBJ)
	$(CC) $(CFLAGS) -Iinc -g -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(SRCOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
