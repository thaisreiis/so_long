/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:47 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:48 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates memory for a duplicate of s with malloc().

Returns a pointer to a new string which
is a duplicate of the string s.*/
char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	if (!s)
		return (NULL);
	dst = malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	i = -1;
	while (s[++i])
		dst[i] = s[i];
	dst[i] = '\0';
	return (dst);
}
