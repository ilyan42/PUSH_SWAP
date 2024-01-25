/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:43:50 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/24 19:03:34 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t size_lst(t_lst *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_lst *ft_lstmax(t_lst *lst)
{
	t_lst *max;
	int max_element;
	
	max_element = 0;
	while(lst)
	{
		if (lst->nb > max_element)
		{
			max = lst;
			max_element = lst->nb;
		}
		lst = lst->next;
	}
	return (max);
}
void	sort_three_element(t_lst **lst)
{
	t_lst *max_element;

	max_element = ft_lstmax(*lst);
	if (*lst == max_element)
		rra(lst);
	else if ((*lst)->next == max_element)
		ra(lst);
	if ((*lst)->nb > (*lst)->next->nb)
		sa(lst);
}

int main(int ac, char **av)
{
	t_lst *a;

	a = NULL;
	if (ac == 1 || !av[1][0])
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	ft_init_list_a(&a , av);
	if (size_lst(a) == 3)
		sort_three_element(&a);
	while (a)
	{
		ft_printf("%d\n", a->nb);
		a = a->next;
	}
	return (0);
}