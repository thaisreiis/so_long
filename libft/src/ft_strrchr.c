/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:34:49 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:34:52 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a pointer to  the matched character
or NULL if the character is not found.*/
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	int				i;

	a = c;
	i = ft_strlen(s);
	if (a == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
