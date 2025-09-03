/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:32:36 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:32:38 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Fills the first n bytes of the memory
area pointed to by s with the constant byte c.

Returns a pointer to the memory area s.*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
