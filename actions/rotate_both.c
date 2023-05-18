/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:34:29 by simao             #+#    #+#             */
/*   Updated: 2023/05/18 15:46:22 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
Minimal ra performs the same action as ra, 
except it doesnt print or count the action.
*/
void	minimal_ra(void)
{
	t_stack_node	*curr;
	int				temp;

	curr = stack()->a;
	temp = curr->val;
	while (curr)
	{
		if (!(curr->nxt))
		{
			curr->val = temp;
			break ;
		}
		curr->val = curr->nxt->val;
		curr = curr->nxt;
	}
}

/*
Minimal rb performs the same action as rb, 
except it doesnt print or count the action.
*/
void	minimal_rb(void)
{
	t_stack_node	*curr;
	int				temp;

	curr = stack()->b;
	temp = curr->val;
	while (curr)
	{
		if (!(curr->nxt))
		{
			curr->val = temp;
			break ;
		}
		curr->val = curr->nxt->val;
		curr = curr->nxt;
	}
}

void	rr(void)
{
	minimal_ra();
	minimal_rb();
	stack()->total_actions++;
	//write(1, "rr\n", 3);
}

