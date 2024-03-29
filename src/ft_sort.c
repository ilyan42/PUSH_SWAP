/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:44:37 by ilbendib          #+#    #+#             */
/*   Updated: 2024/02/01 19:19:22 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	list_is_sorted(t_lst *stack)
{
	if (!stack)
		return (true);
	while (stack->next != NULL)
	{
		if (stack->nb > stack->next->nb)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	sort_three_element(t_lst **lst)
{
	t_lst	*max_element;

	max_element = ft_lstmax(*lst);
	if (*lst == max_element)
		ra(lst);
	else if ((*lst)->next == max_element)
		rra(lst);
	if ((*lst)->nb > (*lst)->next->nb)
		sa(lst);
}

void	sort_four_element(t_lst **a, t_lst **b)
{
	int	min;

	min = ft_get_min(a);
	if (list_is_sorted(*a))
		return ;
	else if (min == 1)
		ra(a);
	else if (min == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min == 3)
		rra(a);
	if (list_is_sorted(*a))
		return ;
	pb(a, b);
	sort_three_element(a);
	pa(b, a);
}

void	sort_five_element(t_lst **a, t_lst **b)
{
	int	min;

	min = ft_get_min(a);
	if (list_is_sorted(*a))
		return ;
	else if (min == 1)
		ra(a);
	else if (min == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min == 3)
	{
		rra(a);
		rra(a);
	}
	else if (min == 4)
		rra(a);
	if (list_is_sorted(*a))
		return ;
	pb(a, b);
	sort_four_element(a, b);
	pa(b, a);
	pa(b, a);
}

void	sort_stack(t_lst **a, t_lst **b)
{
	int	i;
	int	j;
	int	size;

	size = size_lst(*a);
	j = 0;
	while (!list_is_sorted(*a))
	{
		i = 0;
		while (i < size)
		{
			if ((((*a)->content >> j) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		j++;
	}
}
