/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/19 12:38:57 by simao            ###   ########.fr       */
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

void	make_move(int *best_move)
{
	while (stack()->a->val != best_move[0] && stack()->b->val != best_move[1])
	{
		if (lst_mid(stack()->b) > indx(best_move[0], stack()->a)
			&& lst_mid(stack()->a) > indx(best_move[1], stack()->b))
			rr();
		else
			rrr();
	}
	while (stack()->a->val != best_move[0])
	{
		if (lst_mid(stack()->a) > indx(best_move[0], stack()->a))
			ra();
		else
			rra();
	}
	while (stack()->b->val != best_move[1])
	{
		if (lst_mid(stack()->b) > indx(best_move[1], stack()->b))
			rb();
		else
			rrb();
	}
	pa();
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

void	big_sort(void)
{
	int				media;
	int				*best_moves;

	while (list_len(stack()->a) > 3)
	{
		media = mean(stack()->a);
		if (stack()->a->val < media)
			pb();
		else
			ra();
	}
	small_sort();
	while (stack()->b)
	{
		best_moves = best_pair();
		make_move(best_moves);
		free(best_moves);
	}
	if (!list_is_sorted(stack()->a))
		rotate_min_val();
}
