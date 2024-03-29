/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:41:52 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/02/01 17:30:08 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_lst
{
	int				nb;
	int				content;
	struct s_lst	*next;
}					t_lst;

/**** FT_INIT_LIST_A ****/

void				ft_init_list_a(t_lst **a, char **av, bool free_mod);

/**** MOVES ****/

void				pb(t_lst **a, t_lst **b);
void				pa(t_lst **a, t_lst **b);
void				ra(t_lst **a);
void				rb(t_lst **b);
void				rr(t_lst **a, t_lst **b);
void				rra(t_lst **a);
void				rrb(t_lst **b);
void				rrr(t_lst **a, t_lst **b);
void				sa(t_lst **a);
void				sb(t_lst **b);
void				ss(t_lst **a, t_lst **b);

/**** FT_SORT ****/

bool				list_is_sorted(t_lst *stack);
void				sort_three_element(t_lst **lst);
void				sort_four_element(t_lst **a, t_lst **b);
void				sort_five_element(t_lst **a, t_lst **b);
void				sort_stack(t_lst **a, t_lst **b);

/**** FT_UTILS ****/

long				ft_atol(char *str);
t_lst				*ft_lstlast_node(t_lst *lst);
size_t				size_lst(t_lst *lst);
t_lst				*ft_lstmax(t_lst *lst);
int					ft_get_min(t_lst **lst);

/**** FT_CHECK_ERRORS ****/

bool				error_syntax(const char *str);
bool				error_is_double(t_lst *a, int x);
void				free_errors(t_lst **a, char *error_msg, char **str,
						bool free_mod);
void				free_stack(t_lst **stack);
void				free2d(char **str);

#endif