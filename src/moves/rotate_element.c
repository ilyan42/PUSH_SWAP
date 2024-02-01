/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:06:58 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 19:21:09 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_element(t_lst **lst)
{
	t_lst	*first;
	t_lst	*last;

	if (!(*lst) || !(*lst)->next)
		return ;
	first = *lst;
	*lst = first->next;
	last = ft_lstlast_node(*lst);
	last->next = first;
	first->next = NULL;
}

void	ra(t_lst **a)
{
	rotate_element(a);
	ft_printf("ra\n");
}

void	rb(t_lst **b)
{
	rotate_element(b);
	ft_printf("rb\n");
}

void	rr(t_lst **a, t_lst **b)
{
	rotate_element(a);
	rotate_element(b);
	ft_printf("rr\n");
}
