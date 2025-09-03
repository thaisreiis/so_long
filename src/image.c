/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:44:12 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:52:34 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_data	create_image(char *path, t_game *game)
{
	t_data	img;

	img.ptr_img = mlx_xpm_file_to_image(game->conmlx, path, (int *)&img.x,
			(int *)&img.y);
	if (!img.ptr_img)
	{
		write(2, "Error\nFailed to load image", 27);
		exit(EXIT_FAILURE);
	}
	return (img);
}

void	init_images(t_game *game)
{
	game->img.ptr_img = mlx_new_image(game->conmlx, game->map_width * 64,
			game->map_height * 64);
	game->floor = create_image("textures/floor.xpm", game);
	game->wall = create_image("textures/wall.xpm", game);
	game->player = create_image("textures/player.xpm", game);
	game->exit = create_image("textures/exit.xpm", game);
	game->collect = create_image("textures/collect.xpm", game);
	put_images(game);
}

void	put_images(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			choose_image(game, y, x);
			x++;
		}
		y++;
	}
}

void	choose_image(t_game *game, int y, int x)
{
	if (game->map[y][x] == '0')
		mlx_put_image_to_window(game->conmlx, game->winmlx,
			game->floor.ptr_img, x * 64, y * 64);
	if (game->map[y][x] == 'P')
		mlx_put_image_to_window(game->conmlx, game->winmlx,
			game->player.ptr_img, x * 64, y * 64);
	else if (game->map[y][x] == 'C')
		mlx_put_image_to_window(game->conmlx, game->winmlx,
			game->collect.ptr_img, x * 64, y * 64);
	else if (game->map[y][x] == '1')
		mlx_put_image_to_window(game->conmlx, game->winmlx,
			game->wall.ptr_img, x * 64, y * 64);
	else if (game->map[y][x] == 'E')
		mlx_put_image_to_window(game->conmlx, game->winmlx,
			game->exit.ptr_img, x * 64, y * 64);
}

void	refresh_images_player(t_game *game, int x, int y, char key)
{
	mlx_clear_window(game->conmlx, game->winmlx);
	put_images(game);
	mlx_put_image_to_window(game->conmlx, game->winmlx, game->floor.ptr_img, x
		* 64, y * 64);
	if (key == 'w')
		update_player(game, x, y - 1);
	else if (key == 'a')
		update_player(game, x - 1, y);
	else if (key == 's')
		update_player(game, x, y + 1);
	else if (key == 'd')
		update_player(game, x + 1, y);
}
