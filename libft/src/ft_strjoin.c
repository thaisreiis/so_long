/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:56 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:58 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates memory with malloc() and returns a new
string, which is the result of the concatenation
of s1 and s2, or NULL if the allocation fails.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	new_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	j = -1;
	while (s2[++j])
		new_s[i++] = s2[j];
	new_s[i] = '\0';
	return (new_s);
}
