/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 23:28:48 by simao             #+#    #+#             */
/*   Updated: 2023/05/15 18:36:42 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	medium_sort(void)
{
	int	index;
	int	proximity;

	while (list_len(stack_data()->a) != 3)
	{
		if (stack_data()->a->val == list_min_val(stack_data()->a))
			pb();
		else if (stack_data()->a->nxt->val == list_min_val(stack_data()->a))
		{
			sa();
			pb();
		}
		index = get_index(list_min_val(stack_data()->a));
		proximity = list_len(stack_data()->a) / 2;
		if (proximity > index)
			ra();
		else
			rra();
	}
	if (!list_is_sorted(stack_data()->a))
		small_sort();
	while (list_len(stack_data()->b) > 0)
		pa();
}
