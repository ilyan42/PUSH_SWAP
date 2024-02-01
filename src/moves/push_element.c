/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:15:35 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 19:21:19 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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
