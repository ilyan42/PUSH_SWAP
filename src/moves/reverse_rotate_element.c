/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_element.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:55:46 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 19:20:17 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	reverse_rotate_element(t_lst **lst)
{
	t_lst	*last;
	t_lst	*tmp;

	if (!(*lst) || !(*lst)->next)
		return ;
	last = *lst;
	tmp = NULL;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *lst;
	*lst = last;
	tmp->next = NULL;
}

void	rra(t_lst **a)
{
	reverse_rotate_element(a);
	ft_printf("rra\n");
}

void	rrb(t_lst **b)
{
	reverse_rotate_element(b);
	ft_printf("rrb\n");
}

void	rrr(t_lst **a, t_lst **b)
{
	reverse_rotate_element(a);
	reverse_rotate_element(b);
	ft_printf("rrr\n");
}
