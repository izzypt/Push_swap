/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:09:37 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/17 22:14:05 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

typedef struct s_stack_node
{
	int						val;
	struct s_stack_node		*nxt;
	struct s_stack_node		*prev;
}						t_stack_node;

typedef struct s_stack_data
{
	t_stack_node	*a;
	t_stack_node	*a_tail;
	t_stack_node	*b;
	t_stack_node	*b_tail;
	t_stack_node	*tmp;
	int				total_actions;
}	t_stack_data;

// List related
t_stack_data	*stack(void);
t_stack_node	*create_stack_a(int argc, char **argv);
t_stack_node	*create_stack_b(void);
t_stack_node	*create_stack_tmp(int argc, char **argv);
int				list_is_sorted(t_stack_node *head);
int				list_len(t_stack_node *head);
void			print_list(t_stack_node *head);
int				list_max_val(t_stack_node *head);
int				list_min_val(t_stack_node *head);
t_stack_node	*sort_list(t_stack_node *lst);
// Actions
void			sa(void);
void			sb(void);
void			ss(void);
void			ra(void);
void			rb(void);
void			rr(void);
void			rra(void);
void			rrb(void);
void			pb(void);
void			pa(void);
// Validation function
int				validate_input(char *str);
void			check_duplicates(void);
int				ft_atoi(const char *s);
// Utils
void			put_nbr(int number);
void			error_and_exit(void);
int				indx(int value, t_stack_node *lst);
int				value_at(int i, t_stack_node *lst);
// Sort functions
void			smallest_sort(void);
void			small_sort(void);
void			medium_sort(void);
void			big_sort(void);
// Calculate functions
int				mean(t_stack_node *lst);
int				best_move(t_stack_node	*lst, int pivot);
int				best_friend(int number);
int				move_cost(t_stack_node	*lst, int val);

#endif