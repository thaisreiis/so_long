/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:32:25 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:32:27 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies n bytes from memory area src to
memory area dest. The memory areas may overlap: copying
takes place as though the bytes in src are first copied into
a temporary array that does not overlap src or dest, and the
bytes are then copied from the temporary array to dest.

Returns a pointer to dest.*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*memsrc;
	char		*memdest;

	memsrc = (const char *)src;
	memdest = (char *)dest;
	if (dest > src)
	{
		while (n--)
			memdest[n] = memsrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
