/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:28 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:29 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Return 1 if the str is empty or has only spaces or tabs
Return 0 if the str has other chars*/
int	ft_str_empty(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] != ' ' && s[i] != '\t')
			return (0);
	}
	return (1);
}
