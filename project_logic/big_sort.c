/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:45:42 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 13:56:53 by simao            ###   ########.fr       */
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

int	val_under_pivot(int pivot)
{
	t_stack_node	*curr;

	curr = stack()->a;
	while (curr)
	{
		if (curr->val <= pivot)
			return (curr->val);
		curr = curr->nxt;
	}
	return (INT_MAX);
}

void	big_sort(void)
{
	int	chunck;
	int	pivot;
	int	nxt_val;
	int	proximity;
	int	chunck_size;

	chunck = 3;
	while (chunck > 0)
	{
		pivot = value_at(list_len(stack()->tmp) / chunck);
		chunck_size = (list_len(stack()->tmp) / chunck);
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
				nxt_val = get_index(val_under_pivot(pivot));
				proximity = list_len(stack()->a) / 2;
				if (proximity > nxt_val)
					ra();
				else
					rra();
			}
		}
		chunck--;
	}
	while (list_len(stack()->b) > 2)
	{
		if (stack()->b->val == list_max_val(stack()->b))
			pa();
		else if (stack()->b->nxt->val == list_max_val(stack()->b))
		{
			sb();
			pa();
		}
		nxt_val = get_index(list_max_val(stack()->b));
		proximity = list_len(stack()->b) / 2;
		if (proximity > nxt_val)
			rb();
		else
			rrb();
	}
}
