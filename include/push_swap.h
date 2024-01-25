/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:41:52 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/01/24 19:07:44 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../LIBFT/libft.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_lst
{
	int nb;
	void	*content;
	struct s_lst	*next;
	struct s_lst	*first;
}					t_lst;

/**** FT_INIT_LIST_A ****/

void ft_init_list_a(t_lst **a, char **av);

/**** MOVES ****/

void	pb(t_lst **a, t_lst **b);
void	pa(t_lst **a, t_lst **b);
void	ra(t_lst **a);
void	rb(t_lst **b);
void	rr(t_lst **a, t_lst **b);
void	rra(t_lst **a);
void	rrb(t_lst **b);
void	rrr(t_lst **a, t_lst **b);
void	sa(t_lst **a);

/**** FT_UTILS ****/

long ft_atol(char *str);
t_lst	*ft_lstlast_node(t_lst *lst);

#endif