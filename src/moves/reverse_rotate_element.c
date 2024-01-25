/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_element.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:55:46 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/24 18:08:18 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void reverse_rotate_element(t_lst **stack)
{
	t_lst *last;
	t_lst *second_last;

	if (!(*stack) || !(*stack)->next)
		return ;

	last = *stack;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	second_last->next = NULL;
}

void	rra(t_lst **a)
{
	reverse_rotate_element(a);
	ft_printf("rra\n\n");
}

void	rrb(t_lst **b)
{
	reverse_rotate_element(b);
	ft_printf("rrb\n\n");
}

void	rrr(t_lst **a, t_lst **b)
{
	reverse_rotate_element(a);
	reverse_rotate_element(b);
	ft_printf("rrr\n\n");
}