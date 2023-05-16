/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:53:56 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 22:54:38 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
