/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:40:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 12:34:06 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(void)
{
	int	buffer;

	buffer = stack()->a->val;
	stack()->a->val = stack()->a->nxt->val;
	stack()->a->nxt->val = buffer;
	write(1, "sa\n", 3);
}

void	sb(void)
{
	int	buffer;

	buffer = stack()->b->val;
	stack()->b->val = stack()->b->nxt->val;
	stack()->b->nxt->val = buffer;
	write(1, "sb\n", 3);
}

void	ss(void)
{
	sa();
	sb();
	write(1, "ss\n", 3);
}
