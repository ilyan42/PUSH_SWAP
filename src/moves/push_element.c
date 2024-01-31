/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:15:35 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/31 14:56:19 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_node(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node	*tmp;

	tmp = NULL;
	if (!(*src))
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	tmp->next = (*dest);
	(*dest) = tmp;
}

void	pa(t_stack_node **a, t_stack_node **b, bool print)
{
	push_node(a, b);
	if (print)
		write(1, "pa\n", 3);
}

void	pb(t_stack_node **a, t_stack_node **b, bool print)
{
	push_node(b, a);
	if (print)
		write(1, "pb\n", 3);
}