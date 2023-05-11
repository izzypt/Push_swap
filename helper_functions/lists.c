/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:22:00 by simao             #+#    #+#             */
/*   Updated: 2023/05/11 15:11:42 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_nbr(int number)
{
	if (number > 10)
		put_nbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

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
	return (head);
}
