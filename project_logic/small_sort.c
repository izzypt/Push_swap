/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:54:43 by simao             #+#    #+#             */
/*   Updated: 2023/05/15 13:15:37 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallest_sort(void)
{
	if (list_len(stack_data()->a_head) == 1)
		return ;
	if (list_len(stack_data()->a_head) == 2)
		sa(stack_data()->a_head);
}

void	small_sort(void)
{
	t_stack_node	*curr;

	curr = stack_data()->a_head;
	if (curr->val > curr->nxt->val && curr->val < curr->nxt->nxt->val)
		sa(stack_data()->a_head);
	else if (curr->val < curr->nxt->val && curr->val > curr->nxt->nxt->val)
		rra(stack_data()->a_head);
	else if (curr->nxt->val < curr->val && curr->nxt->val > curr->nxt->nxt->val)
	{
		sa(stack_data()->a_head);
		rra(stack_data()->a_head);
	}
	else if (curr->nxt->val > curr->val && curr->nxt->val > curr->nxt->nxt->val)
	{
		sa(stack_data()->a_head);
		ra(stack_data()->a_head);
	}
	else if (curr->val > curr->nxt->val && curr->val > curr->nxt->nxt->val)
	{
		rra(stack_data()->a_head);
		rra(stack_data()->a_head);
	}
}
