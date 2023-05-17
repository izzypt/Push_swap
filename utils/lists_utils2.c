/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:53:56 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/17 23:56:55 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_stack_node *head)
{
	t_stack_node	*curr;

	if (!head)
	{
		write(1, "NULL\n", 5);
		return ;
	}
	curr = head;
	while (curr)
	{
		put_nbr(curr->val);
		write(1, " ", 1);
		curr = curr->nxt;
	}
}

int	list_is_sorted(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr->nxt)
	{
		if (curr->val > curr->nxt->val)
			return (0);
		curr = curr->nxt;
	}
	return (1);
}

int	list_len(t_stack_node *head)
{
	int				i;
	t_stack_node	*curr;

	i = 0;
	curr = head;
	if (!curr)
		return (0);
	while (curr)
	{
		i++;
		curr = curr->nxt;
	}
	return (i);
}

int	ascending(int a, int b)
{
	return (a <= b);
}

t_stack_node	*sort_list(t_stack_node *lst)
{
	t_stack_node	*current;
	t_stack_node	*next;
	int				tmp;

	current = lst;
	while (current)
	{
		next = current->nxt;
		while (next)
		{
			if (ascending(current->val, next->val) == 0)
			{
				tmp = current->val;
				current->val = next->val;
				next->val = tmp;
			}
			next = next->nxt;
		}
		current = current->nxt;
	}
	return (lst);
}
