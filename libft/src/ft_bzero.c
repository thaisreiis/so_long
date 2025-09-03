/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:30:45 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:30:47 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing
zeros (bytes containing '\0') to that area.*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
