/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/18 16:45:32 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*best_pair(void)
{
	int				best_cost;
	int				tmp;
	int				*pair;
	t_stack_node	*curr;

	curr = stack()->b;
	best_cost = INT_MAX;
	pair = malloc(sizeof(int) * 2);
	make_best_friends();
	while (curr)
	{
		tmp = move_cost(stack()->a, curr->bff) + move_cost(stack()->b, curr->val);
		if (tmp < best_cost)
		{
			best_cost = tmp;
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
		if (lst_mid(stack()->b) > indx(top_pair[0], stack()->a))
			ra();
		else
			rra();
	}
	while (stack()->b->val != top_pair[1])
	{
		if (lst_mid(stack()->a) > indx(top_pair[1], stack()->b))
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

void	big_sort(void)
{
	int				media;
	int				*top_pair;
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
		top_pair = best_pair();
		make_move(top_pair);
	}
	if (!list_is_sorted(stack()->a))
		rotate_min_val();
}
