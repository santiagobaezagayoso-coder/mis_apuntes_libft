/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 22:24:56 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 22:25:46 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;
    
    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    temp = ft_lstlast(*lst);
    temp -> next = new;
    //new -> next = NULL;
}
/*#include <stdio.h>

int main(void)
{
    t_list *nodo1;
    t_list *nodo2;
    t_list *nodo3;
    t_list *nodo4;

    nodo1 = malloc(sizeof(t_list));
    nodo2 = malloc(sizeof(t_list));
    nodo3 = malloc(sizeof(t_list));
    nodo4 = malloc(sizeof(t_list));

    nodo4->content = "Ultimo";
    nodo4->next = NULL;

    nodo3->content = "Caja 3";
    nodo3->next =  NULL;

    nodo2->content = "Caja 2";
    nodo2->next = nodo3;

    nodo1->content = "Caja 1";
    nodo1->next = nodo2;

    ft_lstadd_back(&nodo1, nodo4);

    while (nodo1)
    {
        printf("%s -> ", (char *) nodo1->content);
        nodo1 = nodo1->next;
    }
    return (0);
}*/