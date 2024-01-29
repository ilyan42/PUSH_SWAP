/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:43:50 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/29 11:56:42 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
	t_lst *a;

	a = NULL;
	if (ac == 1 || !av[1][0])
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	ft_init_list_a(&a , av);
	if (!list_is_sorted(a))
	{
		if (size_lst(a) == 2)
			sa(&a);
		else if (size_lst(a) == 3)
			sort_three_element(&a);
		// else
		// 	sort_stack(a);
	}
	while (a)
	{
		ft_printf("%d\n", a->nb);
		a = a->next;
	}
	return (0);
}