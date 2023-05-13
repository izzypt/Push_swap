/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:03:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/13 22:48:34 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node *head)
{
	t_stack_node	*curr;
	int				temp;

	curr = head;
	temp = curr->val;
	while (curr)
	{
		if (!(curr->nxt))
		{
			curr->val = temp;
			break ;
		}
		curr->val = curr->nxt->val;
		curr = curr->nxt;
	}
	write(1, "ra\n", 3);
}

void	rb(t_stack_node *head)
{
	t_stack_node	*curr;
	int				temp;

	curr = head;
	temp = curr->val;
	while (curr)
	{
		if (!(curr->nxt))
		{
			curr->val = temp;
			break ;
		}
		curr->val = curr->nxt->val;
		curr = curr->nxt;
	}
	write(1, "rb\n", 3);
}

void	rr(t_stack_node *a_head, t_stack_node *b_head)
{
	ra(a_head);
	rb(b_head);
	write(1, "rr\n", 3);
}

void	rra(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = head;
	stack_data()->a_head = curr->nxt;
	curr->nxt = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = head;
	stack_data()->b_head = curr->nxt;
	curr->nxt = NULL;
	write(1, "rrb\n", 4);
}
