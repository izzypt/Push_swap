/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:09:37 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/12 17:23:35 by simao            ###   ########.fr       */
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
	int						value;
	struct s_stack_node		*next;
	struct s_stack_node		*prev;
}						t_stack_node;

typedef struct s_stack_data
{
	t_stack_node	*a_head;
	t_stack_node	*a_tail;
	t_stack_node	*b_head;
	t_stack_node	*b_tail;
}	t_stack_data;

t_stack_data	*stack_data(void);
t_stack_node	*create_stack_a(int argc, char **argv);
t_stack_node	*create_stack_b(void);
int				validate_input(char *str);
int				ft_atoi(const char *s);
void			print_list(t_stack_node *head);
void			put_nbr(int number);
void			sa(t_stack_node *head);
void			sb(t_stack_node *head);
void			ss(t_stack_node *head_a, t_stack_node *head_b);
void			ra(t_stack_node *head);
void			rra(t_stack_node *tail);
void			pb(void);
void			pa(void);

#endif