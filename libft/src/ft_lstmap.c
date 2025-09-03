/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:31:56 by tdos-rei          #+#    #+#             */
/*   Updated: 2025/08/31 15:31:58 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}
