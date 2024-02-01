/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:21:53 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 14:38:47 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	error_syntax(const char *str)
{
	int i;

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
		return (true);
	while (a)
	{
		if (a->nb == x)
			return (true);
		a = a->next;
	}
	return (false);
}