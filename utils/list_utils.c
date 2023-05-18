/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:19:20 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/19 00:03:45 by smagalha         ###   ########.fr       */
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

int	indx(int value, t_stack_node *lst)
{
	t_stack_node	*curr;
	int				i;

	curr = lst;
	i = 0;
	while (curr)
	{
		if (curr->val == value)
			return (i);
		i++;
		curr = curr->nxt;
	}
	return (-9999);
}

int	value_at(int index, t_stack_node *lst)
{
	int				i;
	t_stack_node	*curr;

	i = 0;
	curr = lst;
	while (curr)
	{
		if (i == index)
			return (curr->val);
		i++;
		curr = curr->nxt;
	}
	return (-9999);
}

void	free_list(t_stack_node *lst)
{
	t_stack_node	*curr;
	t_stack_node	*next_node;

	curr = lst;
	while (curr)
	{
		next_node = curr->nxt;
		free(curr);
		curr = next_node;
	}

}
