/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:30:29 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:30:31 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	if (!*matrix || !**matrix)
		return ;
	while (matrix[i] != NULL)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
