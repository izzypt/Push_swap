/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 23:28:48 by simao             #+#    #+#             */
/*   Updated: 2023/05/15 02:56:38 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	medium_sort(void)
{
	while (list_len(stack_data()->b_head) != 2)
	{
		if (stack_data()->a_head->val == list_max_value(stack_data()->a_head))
			pb();
		else if (stack_data()->a_head->nxt->val \
		== list_max_value(stack_data()->a_head))
		{
			sa(stack_data()->a_head);
			pb();
		}
		else if (stack_data()->a_head ->nxt->nxt->val \
		== list_max_value(stack_data()->a_head))
			ra(stack_data()->a_head);
		else
			rra(stack_data()->a_head);
	}
	small_sort();
	pa();
	ra(stack_data()->a_head);
	pa();
	ra(stack_data()->a_head);
}
