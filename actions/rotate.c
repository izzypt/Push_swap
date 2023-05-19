/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:03:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/19 13:23:57 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(void)
{
	t_stack_node	*curr;
	int				temp;

	curr = stack()->a;
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
	stack()->total_actions++;
	write(1, "ra\n", 3);
}

void	rb(void)
{
	t_stack_node	*curr;
	int				temp;

	curr = stack()->b;
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
	stack()->total_actions++;
	write(1, "rb\n", 3);
}

void	rra(void)
{
	t_stack_node	*curr;

	curr = stack()->a;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = stack()->a;
	stack()->a = curr->nxt;
	curr->nxt = NULL;
	stack()->total_actions++;
	write(1, "rra\n", 4);
}

void	rrb(void)
{
	t_stack_node	*curr;

	curr = stack()->b;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = stack()->b;
	stack()->b = curr->nxt;
	curr->nxt = NULL;
	stack()->total_actions++;
	write(1, "rrb\n", 4);
}
