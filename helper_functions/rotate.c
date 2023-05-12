/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:03:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/12 00:12:45 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node *head)
{
	t_stack_node	*curr;
	int				temp;

	curr = head;
	temp = curr->value;
	while (curr)
	{
		if (!(curr->next))
		{
			curr->value = temp;
			break ;
		}
		curr->value = curr->next->value;
		curr = curr->next;
	}
	write(1, "ra\n", 3);
}


void	rb(t_stack_node *head)
{
	t_stack_node	*curr;
	int				temp;

	curr = head;
	temp = curr->value;
	while (curr)
	{
		if (!(curr->next))
		{
			curr->value = temp;
			break ;
		}
		curr->value = curr->next->value;
		curr = curr->next;
	}
	write(1, "rb", 2);
}

void	rra(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->next)
		curr = curr->next;
	head->prev = curr;
	curr->prev->next = NULL;
	curr->next = head;
	curr->prev = NULL;
	stack_data()->a_head = curr;
	write(1, "ra\n", 3);
}

void	rrb(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->next)
		curr = curr->next;
	head->prev = curr;
	curr->prev->next = NULL;
	curr->next = head;
	curr->prev = NULL;
	stack_data()->b_head = curr;
	write(1, "ra\n", 3);
}
