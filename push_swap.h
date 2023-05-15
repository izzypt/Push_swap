/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:09:37 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 02:18:31 by simao            ###   ########.fr       */
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
	t_stack_node	*a_head;
	t_stack_node	*a_tail;
	t_stack_node	*b_head;
	t_stack_node	*b_tail;
}	t_stack_data;


// List related
t_stack_data	*stack_data(void);
t_stack_node	*create_stack_a(int argc, char **argv);
t_stack_node	*create_stack_b(void);
int				list_is_sorted(t_stack_node *head);
int				list_len(t_stack_node *head);
void			print_list(t_stack_node *head);
int				list_max_value(t_stack_node *head);
//Actions
void			sa(t_stack_node *head);
void			sb(t_stack_node *head);
void			ss(t_stack_node *head_a, t_stack_node *head_b);
void			ra(t_stack_node *head);
void			rb(t_stack_node *head);
void			rr(t_stack_node *a_head, t_stack_node *b_head);
void			rra(t_stack_node *tail);
void			pb(void);
void			pa(void);
//Validation function
int				validate_input(char *str);
void			check_duplicates(void);
int				ft_atoi(const char *s);
//Utils
void			put_nbr(int number);
void			error_and_exit(void);
//Sort functions
void			small_sort(void);
void			medium_sort(void);

#endif