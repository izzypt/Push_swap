/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:54:43 by simao             #+#    #+#             */
/*   Updated: 2023/05/19 17:37:33 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallest_sort(void)
{
	if (list_len(stack()->a) == 1)
		return ;
	if (list_len(stack()->a) == 2 && !list_is_sorted(stack()->a))
		sa();
}

void	small_sort(void)
{
	t_stack_node	*curr;

	curr = stack()->a;
	if (curr->val > curr->nxt->val && curr->val < curr->nxt->nxt->val)
		sa();
	else if (curr->val < curr->nxt->val && curr->val > curr->nxt->nxt->val)
		rra();
	else if (curr->nxt->val < curr->val && curr->nxt->val > curr->nxt->nxt->val)
	{
		sa();
		rra();
	}
	else if (curr->nxt->val > curr->val && curr->nxt->val > curr->nxt->nxt->val)
	{
		sa();
		ra();
	}
	else if (curr->val > curr->nxt->val && curr->val > curr->nxt->nxt->val)
		ra();
}
