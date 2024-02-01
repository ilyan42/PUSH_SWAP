/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:09:52 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 14:02:50 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_lst	*ft_lstlast_node(t_lst *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

static void adds_a_new_node(t_lst **lst, int x)
{
    t_lst *node;
    t_lst *last_node;

    if (!lst)
        return;
    node = (t_lst *)malloc(sizeof(t_lst));
    if (!node)
        return;
    node->next = NULL;
    node->nb = x;
    if (!(*lst))
    {
        *lst = node;
        node->content = 0;
    }
    else
    {
        last_node = ft_lstlast_node(*lst);
        last_node->next = node;
        node->content = last_node->nb;
    }
}

void ft_init_list_a(t_lst **a, char **av)
{
	long	x;
	int		i;

	i = 0;
	while(av[i])
	{
		x = ft_atol(av[i]);
		adds_a_new_node(a, (int)x);
		i++;
	}
}