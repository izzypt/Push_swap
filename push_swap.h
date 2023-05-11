/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:09:37 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/11 15:11:56 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

int				ft_atoi(const char *s);
void			print_list(t_stack_node *head);
t_stack_node	*create_stack_a(int argc, char **argv);
void			put_nbr(int number);

#endif