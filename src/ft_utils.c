/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:01:35 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/29 11:46:00 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long ft_atol(char *str)
{
	long nb;
	int sign;
	int i;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

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