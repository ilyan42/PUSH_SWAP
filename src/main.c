/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:43:50 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/16 16:41:33 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}

int main(int ac, char **av)
{
	int i = 1;
	// int nb = ft_atoi(av[i]);
	char *tab = ft_atoi(av[i]);
	t_list *str;
	if (ac == 2)
	{
		str = ft_lstnew(&tab);
		ft_printf("%s", str);
	}
	return (0);
}