/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 22:53:31 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node	*create_stack_tmp(int argc, char **argv)
{
	t_stack_node	*curr;
	t_stack_node	*head;
	int				i;

	i = 0;
	while (++i < argc)
	{
		if (i == 1)
		{
			curr = malloc(sizeof(t_stack_node));
			head = curr;
			stack()->tmp = head;
		}
		else
		{
			curr->nxt = malloc(sizeof(t_stack_node));
			curr = curr->nxt;
		}
		curr->val = ft_atoi(argv[i]);
		curr->nxt = NULL;
	}
	sort_list(stack()->tmp);
	return (head);
}

int	movement_cost(int index)
{
	int				lst_len;
	int				move_cost;
	int				aproximity;

	lst_len = list_len(stack()->a);
	aproximity = lst_len / 2;
	if (index <= aproximity)
		move_cost = index - 0;
	else
		move_cost = lst_len - index + 1;
	return (move_cost);
}

int	closest_value(int pivot)
{
	t_stack_node	*curr;
	int				i;
	int				lst_len;
	int				move_cost;
	int				best_move;

	curr = stack()->a;
	lst_len = list_len(stack()->a);
	best_move = lst_len;
	i = 0;
	while (curr)
	{
		if (curr->val <= pivot)
		{
			move_cost = movement_cost(i);
			if (move_cost < best_move)
				best_move = move_cost;
		}
		i++;
		curr = curr->nxt;
	}
	return (best_move);
}

void	big_sort(void)
{
	int	chunck;
	int	pivot;
	int	nxt_val;
	int	proximity;
	int	chunck_size;

	chunck = 4;
	while (chunck > 0)
	{
		chunck_size = (list_len(stack()->tmp) / chunck);
		pivot = value_at(chunck_size);
		while (list_len(stack()->b) != chunck_size)
		{
			if (stack()->a->val <= pivot)
				pb();
			else if (stack()->a->nxt->val <= pivot)
			{
				sa();
				pb();
			}
			if (stack()->a && stack()->a->nxt)
			{
				nxt_val = get_index(closest_value(pivot));
				proximity = list_len(stack()->a) / 2;
				if (nxt_val <= proximity)
					ra();
				else
					rra();
			}
		}
		chunck--;
	}
	while (list_len(stack()->b) > 0)
	{
		if (stack()->b->val == list_max_val(stack()->b))
			pa();
		else if (stack()->b->nxt->val == list_max_val(stack()->b))
		{
			sb();
			pa();
		}
		if (stack()->b && stack()->b->nxt)
		{
			nxt_val = get_index(list_max_val(stack()->b));
			proximity = list_len(stack()->b) / 2;
			if (proximity > nxt_val)
				rb();
			else
				rrb();
		}
	}
}
