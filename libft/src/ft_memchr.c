/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:32:12 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:32:14 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Scans the initial n bytes of the memory area 
pointed to by s for the first instance of c.

Returns a pointer to the matching byte or NULL
if c does not occur in the given memory area.*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		a;

	i = -1;
	str = s;
	a = c;
	while (++i < n)
	{
		if (str[i] == a)
			return ((char *)str + i);
	}
	return (NULL);
}
