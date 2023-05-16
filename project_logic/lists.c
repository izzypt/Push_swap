/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:22:00 by simao             #+#    #+#             */
/*   Updated: 2023/05/16 12:33:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_stack_node *head)
{
	t_stack_node	*curr;

	if (!head)
	{
		write(1, "NULL", 4);
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
