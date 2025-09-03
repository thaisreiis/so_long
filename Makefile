NAME = so_long

SOURCES = checks.c control.c image.c main.c map.c utils.c

SRCOBJ  = obj/
OBJECTS = $(SOURCES:.c=.o)
OBJ     = $(addprefix $(SRCOBJ), $(OBJECTS))

CC     = gcc
CFLAGS = -Wall -Wextra -Werror
RM     = rm -rf

LIBFT_DIR = libft
LIBFT     = $(LIBFT_DIR)/libft.a

MLX_DIR = minilibx-linux
MLX     = $(MLX_DIR)/libmlx_Linux.a

INCS = -Iinc -I$(LIBFT_DIR)/inc -I$(MLX_DIR)

$(SRCOBJ)%.o: src/%.c
	@mkdir -p $(SRCOBJ)
	$(CC) $(CFLAGS) $(INCS) -g -c $< -o $@

$(NAME): $(OBJ) $(LIBFT) $(MLX)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -lft -L$(MLX_DIR) -lmlx_Linux -lXext -lX11 -lm -lz -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Compilar minilibx-linux
$(MLX):
	$(MAKE) -C $(MLX_DIR)

all: $(NAME)

clean:
	$(RM) $(SRCOBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(MLX_DIR) clean


fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
