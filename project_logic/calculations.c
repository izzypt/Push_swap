/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:57:50 by simao             #+#    #+#             */
/*   Updated: 2023/05/17 15:21:06 by simao            ###   ########.fr       */
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
	printf("%d\n", lst_len);
	while (curr)
	{
		total += curr->val;
		curr = curr->nxt;
	}
	if (!total || !lst_len)
		return (0);
	return ((int)(total / lst_len));
}

int	best_move(t_stack_node	*lst, int pivot)
{
	// Itera pela list e procura valores abaixo do pivot.
	// Quando encontra um valor abaixo do pivot, mede a distancia ate a cabeça da lista.
	// Retorna o valor cuja distancia seja a mais pequena de todas.
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
			if ((indx(curr->val) - 0) > (lst_tail - indx(curr->val)))
				cost = lst_tail - indx(curr->val) + 1;
			else
				cost = (indx(curr->val) - 0);
			if (cost < best_cost)
			{
				best_cost = cost;
				best_move = curr->val;
			}
			//printf("Cost of val %d is %d\n", curr->val, cost);
		}
		curr = curr->nxt;
	}
	//printf("Best move is %d\n", best_move);
	return (best_move);
}
