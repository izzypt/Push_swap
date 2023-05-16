/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 23:28:48 by simao             #+#    #+#             */
/*   Updated: 2023/05/16 12:33:29 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	medium_sort(void)
{
	int	index;
	int	proximity;

	while (list_len(stack()->a) != 3)
	{
		if (stack()->a->val == list_min_val(stack()->a))
			pb();
		else if (stack()->a->nxt->val == list_min_val(stack()->a))
		{
			sa();
			pb();
		}
		index = get_index(list_min_val(stack()->a));
		proximity = list_len(stack()->a) / 2;
		if (proximity > index)
			ra();
		else
			rra();
	}
	if (!list_is_sorted(stack()->a))
		small_sort();
	while (list_len(stack()->b) > 0)
		pa();
}
