/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:37:14 by simao             #+#    #+#             */
/*   Updated: 2023/05/15 18:29:59 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(void)
{
	t_stack_node	*node;

	if (!stack_data()->a)
		return ;
	node = stack_data()->a;
	stack_data()->a = stack_data()->a->nxt;
	if (!stack_data()->b)
	{
		create_stack_b();
		stack_data()->b->val = node->val;
	}
	else
	{
		node->nxt = stack_data()->b;
		stack_data()->b = node;
	}
	write(1, "pb\n", 3);
}

void	pa(void)
{
	t_stack_node	*node;

	if (!stack_data()->b)
		return ;
	node = stack_data()->b;
	stack_data()->b = stack_data()->b->nxt;
	if (!stack_data()->a)
	{
		stack_data()->a = node;
		stack_data()->a->nxt = NULL;
	}
	else
	{
		node->nxt = stack_data()->a;
		stack_data()->a = node;
	}
	write(1, "pa\n", 3);
}
