/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:43:50 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 16:04:43 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
	t_lst *a;
	t_lst *b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		ft_init_list_a(&a, ft_split(av[1], ' '), true);
	else
		ft_init_list_a(&a, av + 1, false);
	if (!list_is_sorted(a))
	{
		if (size_lst(a) == 2)
			sa(&a);
		else if (size_lst(a) == 3)
			sort_three_element(&a);
		else if (size_lst(a) == 4)
			sort_four_element(&a, &b);
		else if (size_lst(a) == 5)
			sort_five_element(&a, &b);
		if (size_lst(a) >= 6)
			sort_stack(&a, &b);
	}
	free_stack(&a);
	return (0);
}
