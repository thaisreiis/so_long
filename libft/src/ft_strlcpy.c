/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:34:07 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:34:12 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies up to size - 1 characters from the NULL-terminated src to dst,
NULL-terminating the result.

Returns the length of src.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while ((i < (size - 1)) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
