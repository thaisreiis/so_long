/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:33 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:36 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Verify if the string only contains numeric chars

Return 1 if only contains num chars
Return 0 if contains other chars*/
int	ft_str_is_num(char *s)
{
	int	i;

	i = -1;
	if (!s)
		return (0);
	while (s[++i])
		if (!ft_isnum(s[i]))
			return (0);
	return (1);
}
