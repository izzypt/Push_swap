/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:57:50 by simao             #+#    #+#             */
/*   Updated: 2023/05/18 16:00:55 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	mean(t_stack_node *lst)
{
	t_stack_node		*curr;
	long				total;
	int					lst_len;

	total = 0;
	curr = lst;
	lst_len = list_len(lst);
	while (curr)
	{
		total += curr->val;
		curr = curr->nxt;
	}
	if (!total || !lst_len)
		return (0);
	return ((int)(total / lst_len));
}

int	lst_mid(t_stack_node *lst)
{
	return ((list_len(lst) / 2) - 1);
}

void	make_best_friends(void)
{
	long			tmp;
	t_stack_node	*curr_a;
	t_stack_node	*curr_b;

	curr_b = stack()->b;
	while (curr_b)
	{
		tmp = LONG_MAX;
		curr_a = stack()->a;
		while (curr_a)
		{
			if (curr_a->val > curr_b->val && (curr_a->val - curr_b->val) < tmp)
			{
				tmp = curr_a->val - curr_b->val;
				curr_b->bff = curr_a->val;
			}
			curr_a = curr_a->nxt;
		}
		if (tmp == LONG_MAX && curr_b)
			curr_b->bff = list_min_val(stack()->a);
		curr_b = curr_b->nxt;
	}
}

int	move_cost(t_stack_node	*lst, int val)
{
	int	lst_tail;
	int	cost;

	lst_tail = list_len(lst) - 1;
	if ((indx(val, lst) - 0) > (lst_tail - indx(val, lst)))
		cost = lst_tail - indx(val, lst) + 1;
	else
		cost = (indx(val, lst) - 0);
	return (cost);
}

/*
 Itera pela list e procura valores abaixo do pivot.                         
 Encontra um valor abaixo do pivot, mede a distancia ate a cabeça da lista. 
 Retorna o valor cuja distancia seja a mais pequena de todas.
*/
int	best_move(t_stack_node	*lst, int pivot)
{
	int					lst_tail;
	int					cost;
	int					best_cost;
	int					best_move;
	t_stack_node		*curr;

	curr = lst;
	lst_tail = list_len(lst) - 1;
	best_cost = lst_tail;
	while (curr)
	{
		if (curr->val <= pivot)
		{
			cost = move_cost(lst, curr->val);
			if (cost < best_cost)
			{
				best_cost = cost;
				best_move = curr->val;
			}
			printf("Cost of val %d is %d\n", curr->val, cost);
		}
		curr = curr->nxt;
	}
	printf("Best move is %d\n", best_move);
	return (best_move);
}
