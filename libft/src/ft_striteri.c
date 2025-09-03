/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:51 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:53 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function ’f’ on each char of
the str passed as argument, passing its index
as first argument. Each char is passed by
address to ’f’ to be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
