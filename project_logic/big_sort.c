/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/17 18:52:30 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	movement_cost(int i)
{
	int				lst_len;
	int				move_cost;
	int				aproximity;

	lst_len = list_len(stack()->a);
	aproximity = lst_len / 2;
	if (i <= aproximity)
		move_cost = i - 0;
	else
		move_cost = lst_len - i + 1;
	return (move_cost);
}

void	big_sort(void)
{
	int	media;
	int	chunk_size;
	int	pivot;

	while (list_len(stack()->a) > 3)
	{
		media = mean(stack()->a);
		if (stack()->a->val < media)
			pb();
		else
			ra();
	}
	small_sort();
	print_list(stack()->a);
	write(1, "\n", 1);
	print_list(stack()->b);
}
