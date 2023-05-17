/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/18 00:00:50 by smagalha         ###   ########.fr       */
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

int	*best_pair(void)
{
	int				best_cost;
	int				tmp_cost;
	int				*pair;
	t_stack_node	*curr;

	curr = stack()->b;
	best_cost = INT_MAX;
	pair = malloc(sizeof(int) * 2);
	while (curr)
	{
		tmp_cost = move_cost(stack()->a, best_friend(curr->val)) + move_cost(stack()->b, curr->val);
		if (tmp_cost < best_cost)
		{
			best_cost = tmp_cost;
			pair[0] = best_friend(curr->val);
			pair[1] = curr->val;
		}
		curr = curr->nxt;
	}
	printf("best_cost %d\n", best_cost);
	return (pair);
}

void	big_sort(void)
{
	int	media;
	int	*top_pair;

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
	top_pair = best_pair();
	printf("top pair is: [%d][%d]\n", top_pair[0], top_pair[1]);
	while (stack()->b)
	{
		if (stack()->a->val != top_pair[0])
		{
			if ((list_len(stack()->b) / 2) - 1 > indx(top_pair[0], stack()->b))
				rb();
			else
				rrb();
		}
		if (stack()->b->val != top_pair[1])
		{
			if ((list_len(stack()->a) / 2) - 1 > indx(top_pair[1], stack()->a))
				ra();
			else
				rra();
		}
		pa();
		free(top_pair();)
	}
	print_list(stack()->a);
	write(1, "\n", 1);
	print_list(stack()->b);
}
