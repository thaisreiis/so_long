/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:34:55 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:34:57 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates memory with malloc() and returns a copy of
s1 with the characters specified in ’set’ removed
from the beginning and the end of the string,
or NULL if the allocation fails.*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strim = ft_substr(s1, start, (end - start));
	return (strim);
}
