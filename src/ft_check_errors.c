/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:21:53 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 19:18:37 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	error_syntax(const char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '+' || str[i] == '-' || ft_isdigit(str[i])))
		return (true);
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		return (true);
	while (str[++i])
	{
		if (!(ft_isdigit(str[i])))
			return (true);
	}
	return (false);
}

bool	error_is_double(t_lst *a, int x)
{
	if (!a)
		return (false);
	while (a)
	{
		if (a->nb == x)
			return (true);
		a = a->next;
	}
	return (false);
}

void	free_stack(t_lst **stack)
{
	t_lst	*tmp;
	t_lst	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free2d(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_errors(t_lst **a, char *error_msg, char **str, bool free_mod)
{
	if (free_mod)
		free2d(str);
	free_stack(a);
	ft_putstr_fd(error_msg, 2);
	exit(EXIT_FAILURE);
}
