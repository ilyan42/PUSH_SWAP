/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:01:35 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/31 11:37:23 by ilbendib         ###   ########.fr       */
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

#include <stdio.h>
int	ft_get_min_value(t_lst **lst)
{
	t_lst *head;
    int min_value;

	head = *lst;
	min_value = INT_MAX;
    while (head)
    {
        if (head->nb < min_value)
            min_value = head->nb;
        head = head->next;
    }
	return min_value;
}

int ft_get_min(t_lst **lst)
{
	t_lst *head;
    int min_value;
	int pos;

	head = *lst;
	min_value = ft_get_min_value(lst);
	pos = 0;
    while (head->nb != min_value)
    {
		pos++;
        head = head->next;
    }
	return (pos);
}
