/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 23:28:48 by simao             #+#    #+#             */
/*   Updated: 2023/05/15 14:16:07 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	medium_sort(void)
{
	int	index;
	int	proximity;

	while (list_len(stack_data()->a_head) != 3)
	{
		if (stack_data()->a_head->val == list_min_val(stack_data()->a_head))
			pb();
		else if (stack_data()->a_head->nxt->val \
		== list_min_val(stack_data()->a_head))
		{
			sa(stack_data()->a_head);
			pb();
		}
		index = get_index(list_min_val(stack_data()->a_head));
		proximity = list_len(stack_data()->a_head) / 2;
		if (proximity > index)
			ra(stack_data()->a_head);
		else
			rra(stack_data()->a_head);
	}
	if (!list_is_sorted(stack_data()->a_head))
		small_sort();
	while (list_len(stack_data()->b_head) > 0)
		pa();
}
