/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both_inverted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:40:59 by simao             #+#    #+#             */
/*   Updated: 2023/05/19 13:23:21 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
Minimal rra performs the same action as rra, 
except it doesnt print or count the action.
*/
void	minimal_rra(void)
{
	t_stack_node	*curr;

	curr = stack()->a;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = stack()->a;
	stack()->a = curr->nxt;
	curr->nxt = NULL;
}

/*
Minimal rrb performs the same action as rrb, 
except it doesnt print or count the action.
*/
void	minimal_rrb(void)
{
	t_stack_node	*curr;

	curr = stack()->b;
	while (curr->nxt->nxt)
		curr = curr->nxt;
	curr->nxt->nxt = stack()->b;
	stack()->b = curr->nxt;
	curr->nxt = NULL;
}

void	rrr(void)
{
	minimal_rra();
	minimal_rrb();
	stack()->total_actions++;
	write(1, "rrr\n", 4);
}
