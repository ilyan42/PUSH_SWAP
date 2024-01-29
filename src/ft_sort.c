/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:44:37 by ilbendib          #+#    #+#             */
/*   Updated: 2024/01/29 15:23:45 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	list_is_sorted(t_lst *lst)
{
	if (!lst)
		return (1);
	while (lst->next != NULL)
	{
		if (lst->nb > lst->next->nb)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	sort_three_element(t_lst **lst)
{
	t_lst *max_element;

	max_element = ft_lstmax(*lst);
	if (*lst == max_element)
		ra(lst);
	else if ((*lst)->next == max_element)
		rra(lst);
	if ((*lst)->nb > (*lst)->next->nb)
		sa(lst);
}

void	sort_stack(t_lst **a, t_lst **b)
{
	int len_stack_a;

	len_stack_a = size_lst(a) - 1;
	if (len_stack_a > 3 && !list_is_sorted(a))
		pb(a, b);
	if (len_stack_a > 3 && !list_is_sorted(a))
		pb(a, b);
	while (len_stack_a > 3 && !list_is_sorted(a))
	{
		
	}
	
}