/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:30:01 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:45:29 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/inc/libft.h"
# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	void	*ptr_img;
	int		x;
	int		y;
}			t_data;

typedef struct s_game
{
	char	**map;
	int		map_width;
	int		map_height;

	int		moves_count;
	int		collect_count;
	int		exit_count;
	int		player_count;

	t_data	img;
	t_data	wall;
	t_data	player;
	t_data	exit;
	t_data	collect;
	t_data	floor;

	int		player_x;
	int		player_y;

	int		exit_x;
	int		exit_y;

	void	*conmlx;
	void	*winmlx;
}			t_game;

/* --- Checker Functions --- */

int			check_fd(char *filepath);
int			check_map_size(t_game *game);
int			check_walls(t_game *game);
void		check_errors(t_game *game);

/* --- Image functions --- */

t_data		create_image(char *path, t_game *game);
void		init_images(t_game *game);
void		put_images(t_game *game);
void		refresh_images_player(t_game *game, int x, int y, char flag);
void		destroy_images(t_game *game);
void		choose_image(t_game *game, int y, int x);
void		update_player(t_game *game, int x, int y);

/* --- Map Functions --- */

int			save_map_line(t_game *game, char *line);
int			read_map(t_game *game, char *filepath);
int			read_characters(t_game *game);
void		save_coordenates(t_game *game, int y, int x, int isPlayer);
void		map_error(t_game *game);

/* --- Control Functions --- */

int			control(int key, t_game *game);
void		move_w(t_game *game);
void		move_a(t_game *game);
void		move_s(t_game *game);
void		move_d(t_game *game);

/* --- Utils Functions --- */

void		flood_fill(char **map, int x, int y, int *counter);
int			handle_flood_fill(t_game *game);
void		exit_game(t_game *game);

#endif
