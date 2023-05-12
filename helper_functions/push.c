/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:37:14 by simao             #+#    #+#             */
/*   Updated: 2023/05/12 16:11:59 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(void)
{
	t_stack_node	*node;

	node = stack_data()->a_head;
	stack_data()->a_head = stack_data()->a_head->next;
	stack_data()->a_head->prev = NULL;

	if (!stack_data()->b_head)
	{
		create_stack_b();
		stack_data()->b_head->value = node->value;
	}
	else
	{
		stack_data()->b_head->prev = node;
		node->next = stack_data()->b_head;
		stack_data()->b_head = node;
	}
	write(1, "pb\n", 3);
}
