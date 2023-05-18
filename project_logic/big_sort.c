/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/18 23:19:05 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*best_pair(void)
{
	int				best_cost;
	int				x;
	int				*pair;
	t_stack_node	*curr;

	curr = stack()->b;
	best_cost = INT_MAX;
	pair = malloc(sizeof(int) * 2);
	make_best_friends();
	while (curr)
	{
		x = move_cost(stack()->a, curr->bff) + move_cost(stack()->b, curr->val);
		if (x < best_cost)
		{
			best_cost = x;
			pair[0] = curr->bff;
			pair[1] = curr->val;
		}
		curr = curr->nxt;
	}
	return (pair);
}

void	make_move(int *top_pair)
{
	while (stack()->a->val != top_pair[0] && stack()->b->val != top_pair[1])
	{
		if (lst_mid(stack()->b) > indx(top_pair[0], stack()->a)
			&& lst_mid(stack()->a) > indx(top_pair[1], stack()->b))
			rr();
		else
			rrr();
	}
	while (stack()->a->val != top_pair[0])
	{
		if (lst_mid(stack()->a) > indx(top_pair[0], stack()->a))
			ra();
		else
			rra();
	}
	while (stack()->b->val != top_pair[1])
	{
		if (lst_mid(stack()->b) > indx(top_pair[1], stack()->b))
			rb();
		else
			rrb();
	}
	pa();
	free(top_pair);
}

void	rotate_min_val(void)
{
	int	min_val;

	min_val = list_min_val(stack()->a);
	while (stack()->a->val != min_val)
	{
		if (lst_mid(stack()->a) > indx(min_val, stack()->a))
			ra();
		else
			rra();
	}
}

/*
1 - Push all the elements from A to B until 3 elements are left, w/ 2 conditions:
1.1 - If the element in A is below the list mean, we push.
1.2 - If the element in A is above the list mean, we rotate.
2 - Sort the 3 elements in ascending order.
3 - While there are elements in stack B, find the best move on stack A and stack B. Calculate the cost of moving each element.

*/
void	big_sort(void)
{
	int				media;
	int				*best_moves;
	t_stack_node	*curr;

	while (list_len(stack()->a) > 3)
	{
		media = mean(stack()->a);
		if (stack()->a->val < media)
			pb();
		else
			ra();
	}
	small_sort();
	curr = stack()->b;
	while (stack()->b)
	{
		best_moves = best_pair();
		make_move(best_moves);
	}
	if (!list_is_sorted(stack()->a))
		rotate_min_val();
}
