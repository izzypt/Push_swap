/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:40:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 18:29:31 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(void)
{
	int	buffer;

	buffer = stack_data()->a->val;
	stack_data()->a->val = stack_data()->a->nxt->val;
	stack_data()->a->nxt->val = buffer;
	write(1, "sa\n", 3);
}

void	sb(void)
{
	int	buffer;

	buffer = stack_data()->b->val;
	stack_data()->b->val = stack_data()->b->nxt->val;
	stack_data()->b->nxt->val = buffer;
	write(1, "sb\n", 3);
}

void	ss(void)
{
	sa();
	sb();
	write(1, "ss\n", 3);
}
