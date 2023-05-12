/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:37:14 by simao             #+#    #+#             */
/*   Updated: 2023/05/12 17:54:52 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(void)
{
	t_stack_node	*node;

	if (!stack_data()->a_head)
		return ;
	node = stack_data()->a_head;
	stack_data()->a_head = stack_data()->a_head->next;

	if (!stack_data()->b_head)
	{
		create_stack_b();
		stack_data()->b_head->value = node->value;
	}
	else
	{
		node->next = stack_data()->b_head;
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
	stack_data()->b_head = stack_data()->b_head->next;

	if (!stack_data()->a_head)
	{
		stack_data()->a_head = node;
		stack_data()->a_head->next = NULL;
	}
	else
	{
		node->next = stack_data()->a_head;
		stack_data()->a_head = node;
	}
	write(1, "pa\n", 3);
}
