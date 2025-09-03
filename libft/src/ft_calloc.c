/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:30:53 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:30:54 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates memory for an array of nmemb elements of size bytes each
and returns a pointer to the  allocated memory.  The memory is set
to zero. If nmemb or size is 0, then calloc() returns either NULL,
or a unique pointer value that can later be successfully passed to
free()*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc_space;

	alloc_space = (void *)malloc(nmemb * size);
	if (!alloc_space)
		return (NULL);
	ft_memset(alloc_space, 0, (nmemb * size));
	return (alloc_space);
}
