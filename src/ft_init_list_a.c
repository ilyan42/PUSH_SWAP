/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:09:52 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 19:19:06 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_lst	*ft_lstlast_node(t_lst *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

static void	adds_a_new_node(t_lst **lst, int x)
{
	t_lst	*node;
	t_lst	*last_node;

	if (!lst)
		return ;
	node = (t_lst *)malloc(sizeof(t_lst));
	if (!node)
		return ;
	node->next = NULL;
	node->nb = x;
	if (!(*lst))
	{
		*lst = node;
		node->content = 0;
	}
	else
	{
		last_node = ft_lstlast_node(*lst);
		last_node->next = node;
		node->content = last_node->nb;
	}
}

void	ft_init_list_a(t_lst **a, char **av, bool free_mod)
{
	long	x;
	int		i;

	i = 0;
	while (av[i])
	{
		if (error_syntax(av[i]))
			free_errors(a, "invalide syntax\n", av, free_mod);
		x = ft_atol(av[i]);
		if (x > INT_MAX || x < INT_MIN)
			free_errors(a, "INT MAX or INT MIN detected\n", av, free_mod);
		if (error_is_double(*a, (int)x))
			free_errors(a, "two numbers are equal\n", av, free_mod);
		adds_a_new_node(a, (int)x);
		i++;
	}
	if (free_mod)
		free2d(av);
}
