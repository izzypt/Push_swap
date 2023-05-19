/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:37:14 by simao             #+#    #+#             */
/*   Updated: 2023/05/19 16:57:54 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(void)
{
	t_stack_node	*node;

	if (!stack()->a)
		return ;
	node = stack()->a;
	stack()->a = stack()->a->nxt;
	if (!stack()->b)
	{
		create_stack_b();
		stack()->b->val = node->val;
		free(node);
	}
	else
	{
		node->nxt = stack()->b;
		stack()->b = node;
	}
	stack()->total_actions++;
	//write(1, "pb\n", 3);
}

void	pa(void)
{
	t_stack_node	*node;

	if (!stack()->b)
		return ;
	node = stack()->b;
	stack()->b = stack()->b->nxt;
	if (!stack()->a)
	{
		stack()->a = node;
		stack()->a->nxt = NULL;
	}
	else
	{
		node->nxt = stack()->a;
		stack()->a = node;
	}
	stack()->total_actions++;
	//write(1, "pa\n", 3);
}
