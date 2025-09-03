/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:31:12 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:31:13 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Return 1 if the char is numeric
Return 0 if is something else
*/
int	ft_isnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
