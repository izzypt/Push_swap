/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:19:20 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 12:33:20 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_max_val(t_stack_node *head)
{
	t_stack_node	*curr;
	int				max;

	curr = head;
	max = 0;
	while (curr)
	{
		if (curr->val > max)
			max = curr->val;
		curr = curr->nxt;
	}
	return (max);
}

int	list_min_val(t_stack_node *head)
{
	t_stack_node	*curr;
	int				min;

	curr = head;
	min = curr->val;
	while (curr)
	{
		if (curr->val < min)
			min = curr->val;
		curr = curr->nxt;
	}
	return (min);
}

int	get_index(int value)
{
	t_stack_node	*curr;
	int				index;

	curr = stack()->a;
	index = 0;
	while (curr)
	{
		if (curr->val == value)
			return (index);
		index++;
		curr = curr->nxt;
	}
	return (-1);
}
