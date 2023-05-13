/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:54:43 by simao             #+#    #+#             */
/*   Updated: 2023/05/13 17:22:52 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_sort(void)
{
	t_stack_node	*curr;

	curr = stack_data()->a_head;
	if (curr->value > curr->next->value && \
	curr->value < curr->next->next->value)
		sa(stack_data()->a_head);
	else if (curr->value < curr->next->value && \
	curr->value > curr->next->next->value)
	{
		rra(stack_data()->a_head);
	}

}
