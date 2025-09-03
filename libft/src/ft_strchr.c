/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:39 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:40 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a pointer to the first occurrence of the char c in the str.*/
char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	int				i;

	a = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)s + i);
		i++;
	}
	if (a == '\0')
		return ((char *)s + i);
	return (NULL);
}
