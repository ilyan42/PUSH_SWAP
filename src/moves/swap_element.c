/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:04:16 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 19:21:13 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap_element(t_lst **lst)
{
	t_lst	*tmp;

	if (!(*lst) || (*lst)->next == NULL)
		return ;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	tmp->next = (*lst)->next;
	(*lst)->next = tmp;
}

void	sa(t_lst **a)
{
	swap_element(a);
	ft_printf("sa\n");
}

void	sb(t_lst **b)
{
	swap_element(b);
	ft_printf("sb\n");
}

void	ss(t_lst **a, t_lst **b)
{
	swap_element(a);
	swap_element(b);
	ft_printf("ss\n");
}
