/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 22:25:55 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 22:25:59 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*nuevo_contenido;
	t_list	*temp_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		nuevo_contenido = f(lst -> content);
		temp_node = ft_lstnew(nuevo_contenido);
		if (temp_node == NULL)
		{
			ft_lstclear(&new_list, del);
			del(nuevo_contenido);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp_node);
		lst = lst -> next;
	}
	return (new_list);
}
