/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:32:21 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:32:23 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies n bytes from memory area src to
memory area dest.

Returns a pointer to dest.*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*memsrc;
	char		*memdest;

	if (!dest && !src)
		return (NULL);
	i = -1;
	memsrc = (const char *)src;
	memdest = (char *)dest;
	while (++i < n)
		memdest[i] = memsrc[i];
	return (dest);
}
