/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:22:00 by simao             #+#    #+#             */
/*   Updated: 2023/05/17 12:01:51 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node	*create_stack_a(int argc, char **argv)
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
			stack()->a = head;
		}
		else
		{
			curr->nxt = malloc(sizeof(t_stack_node));
			curr = curr->nxt;
		}
		curr->val = ft_atoi(argv[i]);
		curr->nxt = NULL;
	}
	stack()->a_tail = curr;
	check_duplicates();
	return (head);
}

t_stack_node	*create_stack_b(void)
{
	t_stack_node	*head;

	head = malloc(sizeof(t_stack_node));
	stack()->b = head;
	return (stack()->b);
}

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
