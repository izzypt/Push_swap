/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:03:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 18:36:17 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(void)
{
	t_stack_node	*curr;
	int				temp;

	curr = stack_data()->a;
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

void	rb(void)
{
	t_stack_node	*curr;
	int				temp;

	curr = stack_data()->b;
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

void	rr(void)
{
	ra();
	rb();
	write(1, "rr\n", 3);
}

void	rra(void)
{
	t_stack_node	*curr;

	curr = stack_data()->a;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = stack_data()->a;
	stack_data()->a = curr->nxt;
	curr->nxt = NULL;
	write(1, "rra\n", 4);
}

void	rrb(void)
{
	t_stack_node	*curr;

	curr = stack_data()->b;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = stack_data()->b;
	stack_data()->b = curr->nxt;
	curr->nxt = NULL;
	write(1, "rrb\n", 4);
}
