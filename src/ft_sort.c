/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:44:37 by ilbendib          #+#    #+#             */
/*   Updated: 2024/01/31 16:29:10 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	list_is_sorted(t_lst **lst)
{
	t_lst *tmp;

	tmp = *lst;
	if (tmp == NULL)
		return (0);
	while (tmp->next != NULL)
	{
		if (tmp->nb > tmp->next->nb)
			return (0);
		tmp = tmp->next;
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

void sort_four_element(t_lst **a, t_lst **b)
{
	int min;

	min = ft_get_min(a);
	if (list_is_sorted(a))
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
	if (list_is_sorted(a))
		return ;
    pb(a, b);
    sort_three_element(a);
    pa(b, a);
}

void sort_five_element(t_lst **a, t_lst **b)
{
	int min;

	min = ft_get_min(a);
	if (list_is_sorted(a))
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
	if (list_is_sorted(a))
		return ;
	pb(a, b);

	min = ft_get_min(a);
	if (list_is_sorted(a))
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
	if (list_is_sorted(a))
		return ;
	pb(a, b);
	sort_three_element(a);
	pa(b, a);
    pa(b, a);
}

void sort_stack(t_lst **a, t_lst **b)
{
	int i;
	int j;
	int size;

	size = size_lst(*a);
	j = 0;
	
	while(!list_is_sorted(a))
	{
		i = 0;
		while(i < size)
		{
			if ((((*a)->content >> j) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b != NULL)
			pa(b, a);
		j++;
	}
}

// void sort_stack(t_lst **a, t_lst **b)
// {
//     int j = 0;
//     int size;

//     while (!list_is_sorted(a))
//     {
//         size = size_lst(*a);  // Mise à jour de la taille à chaque itération
//         int i = 0;

//         while (i < size)
//         {
//             if ((((*a)->content >> j) & 1) == 0)
//                 pb(a, b);
//             else
//                 ra(a);
            
//             i++;
//         }

//         while (*b != NULL)
//             pa(b, a);

//         j++;
//     }
// }
