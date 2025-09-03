/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:44:16 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:37:57 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_fd(char *file)
{
	int	fd;
	int	len;

	len = ft_strlen(file);
	if (len < 5 || file[len - 4] != '.' || file[len - 3] != 'b'
		|| file[len - 2] != 'e' || file[len - 1] != 'r')
	{
		write(2, "Error\nMap not supported\n", 25);
		exit(EXIT_FAILURE);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error\nFile invalid\n", 19);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

int	check_walls(t_game *game)
{
	int	i;
	int	j;

	j = game->map_height - 1;
	i = 0;
	while (i < game->map_width)
	{
		if (game->map[0][i] == '1' && game->map[j][i] == '1')
			i++;
		else
			return (0);
	}
	j = game->map_width - 1;
	i = 0;
	while (i < game->map_height)
	{
		if (game->map[i][0] == '1' && game->map[i][j] == '1')
			i++;
		else
			return (0);
	}
	return (1);
}

int	check_map_size(t_game *game)
{
	int	i;
	int	j;
	int	line_size;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		line_size = 0;
		while (game->map[i][j])
		{
			j++;
			if (game->map[i][j] != '\n')
				line_size++;
		}
		if (line_size != game->map_width)
			return (0);
		i++;
	}
	return (1);
}

void	check_errors(t_game *game)
{
	if (!game->map)
		map_error(game);
	else if (!check_map_size(game) || (game->map_height == game->map_width))
		map_error(game);
	else if (!read_characters(game))
		map_error(game);
	else if (!check_walls(game))
		map_error(game);
	else if (game->collect_count < 1)
		map_error(game);
	else if (game->exit_count != 1)
		map_error(game);
	else if (game->player_count != 1)
		map_error(game);
	else if (!handle_flood_fill(game))
		map_error(game);
}
