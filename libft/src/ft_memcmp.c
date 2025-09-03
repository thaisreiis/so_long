/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:32:17 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:32:18 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares the first n bytes of the memory areas s1 and s2.

Returns an integer less than, equal to, or greater than zero
if the first n bytes of s1 is found, respectively, to be less
than, to match, or be greater than the first n bytes of s2.*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}
