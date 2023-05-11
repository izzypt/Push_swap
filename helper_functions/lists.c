/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:22:00 by simao             #+#    #+#             */
/*   Updated: 2023/05/11 17:36:01 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_stack_node *head)
{
	t_stack_node	*curr;

	curr = head;
	while (curr)
	{
		put_nbr(curr->value);
		curr = curr->next;
	}
}

t_stack_node	*create_stack_a(int argc, char **argv)
{
	t_stack_node	*curr;
	t_stack_node	*head;
	int				i;

	i = 1;
	while (i < argc)
	{
		if (i == 1)
		{
			curr = malloc(sizeof(t_stack_node));
			head = curr;
			curr->prev = NULL;
			stack_data()->a_head = head;
		}
		else
		{
			curr->next = malloc(sizeof(t_stack_node));
			curr->next->prev = curr;
			curr = curr->next;
		}
		curr->value = ft_atoi(argv[i]);
		curr->next = NULL;
		i++;
	}
	stack_data()->a_tail = curr;
	return (head);
}
