/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:15:35 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/24 18:04:19 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_element(t_lst **src, t_lst **dest)
{
	t_lst *tmp;

	tmp = NULL;
	if (!(*src))
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	tmp->next = (*dest);
	(*dest) = tmp;
}

void pa(t_lst **a, t_lst **b)
{
	push_element(a, b);
	ft_printf("pa\n");
}

void pb(t_lst **a, t_lst **b)
{
	push_element(b, a);
	ft_printf("pb\n");
}