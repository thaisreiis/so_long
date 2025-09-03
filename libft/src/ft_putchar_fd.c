/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:33:00 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:33:01 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the character ’c’ to the given file
descriptor.*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
