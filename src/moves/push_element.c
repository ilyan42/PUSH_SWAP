/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:15:35 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/31 16:25:58 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// void pa(t_lst **a, t_lst **b)
// {
// 	t_lst *tmp;
	
// 	if (!(*b))
// 		return ;
// 	tmp = (*b)->next;
// 	(*b)->next = (*a);
// 	(*a) = (*b);
// 	(*b) = tmp;
// 	ft_printf("pa\n");
// }

// void pb(t_lst **a, t_lst **b)
// {
// 	t_lst *tmp;
	
// 	if (!(*a))
// 		return ;
// 	tmp = (*a)->next;
// 	(*a)->next = (*b);
// 	(*b) = (*a);
// 	(*a) = tmp;
// 	ft_printf("pb\n");
// }

void	push_element(t_lst **dest, t_lst **src)
{
	t_lst	*tmp;

	tmp = NULL;
	if (!(*src))
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	tmp->next = (*dest);
	(*dest) = tmp;
}

void	pa(t_lst **a, t_lst **b)
{
	push_element(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_lst **a, t_lst **b)
{
	push_element(b, a);
	write(1, "pb\n", 3);
}