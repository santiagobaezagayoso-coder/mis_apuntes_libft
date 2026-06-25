/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 22:25:29 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 22:25:43 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current; 
    t_list *next_node; 

    if (!lst || !del)
        return ;
    current = *lst;
    while (current != NULL)
    {
        next_node = current->next;
        ft_lstdelone(current, del);
        current = next_node;
    }
    *lst = NULL;
}