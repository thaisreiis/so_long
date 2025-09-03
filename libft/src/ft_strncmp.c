/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:34:35 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:34:37 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares only the first n bytes of s1 and s2.

Returns an integer less than, equal to, or greater than zero
if s1 is found, respectively, to be less than, to match,
or be greater than s2.*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
