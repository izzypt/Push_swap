/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:03:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/11 18:16:29 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node *head)
{
	t_stack_node	*curr;
	int				temp;

	curr = head;
	temp = curr->value;
	while (curr)
	{
		if (!(curr->next))
		{
			curr->value = temp;
			break ;
		}
		curr->value = curr->next->value;
		curr = curr->next;
	}
	write(1, "ra", 2);
}


void	rb(t_stack_node *head)
{
	t_stack_node	*curr;
	int				temp;

	curr = head;
	temp = curr->value;
	while (curr)
	{
		if (!(curr->next))
		{
			curr->value = temp;
			break ;
		}
		curr->value = curr->next->value;
		curr = curr->next;
	}
	write(1, "rb", 2);
}

void	rra(t_stack_node *head)
{

}

void	rrb(t_stack_node *head)
{

}
