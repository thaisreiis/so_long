/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:31:25 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:31:27 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(char *s, int len, long int n)
{
	while (n > 0)
	{
		s[len] = 48 + (n % 10);
		n /= 10;
		len--;
	}
	return (s);
}

static int	ft_intlen(long int li)
{
	int	i;

	i = 0;
	if (li == 0)
		return (1);
	if (li < 0)
	{
		i++;
		li *= -1;
	}
	while (li > 0)
	{
		i++;
		li = li / 10;
	}
	return (i);
}

/*Allocates memory with malloc() and returns a str
representing the integer received as an argument.*/
char	*ft_itoa(int n)
{
	long int	li;
	char		*s;
	int			len;

	li = n;
	len = ft_intlen(li);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = 48;
	if (li < 0)
	{
		s[0] = '-';
		li *= -1;
	}
	return (s = ft_convert(s, len, li));
}
