/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:04:16 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/24 19:07:32 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap_element(t_lst **lst)
{
	if (!(*lst) || !(*lst)->next)
		return;

	t_lst *first = *lst;
	t_lst *second = (*lst)->next;

	first->next = second->next;
	second->next = first;
	*lst = second;
}

void	sa(t_lst **a)
{
	swap_element(a);
	ft_printf("sa\n\n");
}

void	sb(t_lst **b)
{
	swap_element(b);
	ft_printf("sb\n\n");
}