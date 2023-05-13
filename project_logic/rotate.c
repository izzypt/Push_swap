/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:03:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/13 17:22:25 by simao            ###   ########.fr       */
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
	write(1, "rb\n", 2);
}

void	rr(t_stack_node *a_head, t_stack_node *b_head)
{
	ra(a_head);
	rb(b_head);
}

void	rra(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->next->next)
		curr = curr->next;
	curr->next->next = head;
	stack_data()->a_head = curr->next;
	curr->next = NULL;
	write(1, "rra\n", 3);
}

void	rrb(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->next->next)
		curr = curr->next;
	curr->next->next = head;
	stack_data()->b_head = curr->next;
	curr->next = NULL;
	write(1, "rrb\n", 3);
}
