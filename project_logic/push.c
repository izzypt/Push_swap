/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:37:14 by simao             #+#    #+#             */
/*   Updated: 2023/05/13 22:38:43 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(void)
{
	t_stack_node	*node;

	if (!stack_data()->a_head)
		return ;
	node = stack_data()->a_head;
	stack_data()->a_head = stack_data()->a_head->nxt;
	if (!stack_data()->b_head)
	{
		create_stack_b();
		stack_data()->b_head->val = node->val;
	}
	else
	{
		node->nxt = stack_data()->b_head;
		stack_data()->b_head = node;
	}
	write(1, "pb\n", 3);
}

void	pa(void)
{
	t_stack_node	*node;

	if (!stack_data()->b_head)
		return ;
	node = stack_data()->b_head;
	stack_data()->b_head = stack_data()->b_head->nxt;
	if (!stack_data()->a_head)
	{
		stack_data()->a_head = node;
		stack_data()->a_head->nxt = NULL;
	}
	else
	{
		node->nxt = stack_data()->a_head;
		stack_data()->a_head = node;
	}
	write(1, "pa\n", 3);
}
