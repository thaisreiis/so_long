/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:44:07 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/30 15:56:56 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
	{
		write(1, "Error\nInvalid argument\n", 24);
		return (1);
	}
	ft_memset(&game, 0, sizeof(t_game));
	read_map(&game, av[1]);
	check_errors(&game);
	game.conmlx = mlx_init();
	game.winmlx = mlx_new_window(game.conmlx, (game.map_width
				* 64), (game.map_height * 64), "SO LONG BY THAIS REIS");
	init_images(&game);
	mlx_key_hook(game.winmlx, control, &game);
	mlx_hook(game.winmlx, 17, 0L, (void *)exit_game, &game);
	mlx_loop(game.conmlx);
	return (0);
}
