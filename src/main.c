/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:43:50 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 16:38:59 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	init_index(t_lst **stack_a)
{
	t_lst	*head;
	t_lst	*iter;
	int		flg;

	iter = (*stack_a);
	while (iter)
	{
		flg = 0;
		head = (*stack_a);
		iter->content = 0;
		while (head)
		{
			if (iter->nb == head->nb)
				flg += 1;
			if (iter->nb > head->nb)
				iter->content += 1;
			head = head->next;
		}
		if (flg != 1)
			return (0);
		iter = iter->next;
	}
	return (1);
}

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
	if (!init_index(&a))
		return (0);
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
