/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:44:13 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:38:50 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	flood_fill(char **map, int x, int y, int *counter)
{
	if (map[y][x] == 'C' || map[y][x] == 'E')
		*counter += 1;
	if (map[y][x] == 'E')
	{
		map[y][x] = '1';
		return ;
	}
	map[y][x] = 'F';
	if (map[y][x + 1] != '1' && map[y][x + 1] != 'F')
		flood_fill(map, x + 1, y, counter);
	if (map[y][x - 1] != '1' && map[y][x - 1] != 'F')
		flood_fill(map, x - 1, y, counter);
	if (map[y + 1][x] != '1' && map[y + 1][x] != 'F')
		flood_fill(map, x, y + 1, counter);
	if (map[y - 1][x] != '1' && map[y - 1][x] != 'F')
		flood_fill(map, x, y - 1, counter);
}

int	handle_flood_fill(t_game *game)
{
	int		counter;
	char	**map_tmp;
	int		i;

	map_tmp = (char **)malloc(sizeof(char *) * (game->map_height + 1));
	if (!map_tmp)
		return (0);
	counter = 0;
	i = 0;
	while (game->map[i])
	{
		map_tmp[i] = ft_strdup(game->map[i]);
		i++;
	}
	map_tmp[i] = NULL;
	flood_fill(map_tmp, game->player_x, game->player_y, &counter);
	free_matrix(map_tmp);
	return (counter == (game->exit_count + game->collect_count));
}

void	update_player(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->conmlx, game->winmlx, game->player.ptr_img, x
		* 64, y * 64);
}

void	destroy_images(t_game *game)
{
	mlx_destroy_image(game->conmlx, game->img.ptr_img);
	mlx_destroy_image(game->conmlx, game->wall.ptr_img);
	mlx_destroy_image(game->conmlx, game->player.ptr_img);
	mlx_destroy_image(game->conmlx, game->exit.ptr_img);
	mlx_destroy_image(game->conmlx, game->collect.ptr_img);
	mlx_destroy_image(game->conmlx, game->floor.ptr_img);
}

void	exit_game(t_game *game)
{
	free_matrix(game->map);
	destroy_images(game);
	if (game->winmlx)
		mlx_destroy_window(game->conmlx, game->winmlx);
	mlx_destroy_display(game->conmlx);
	free(game->conmlx);
	exit(0);
}
