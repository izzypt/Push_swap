/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:40:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/13 22:47:32 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack_node *head)
{
	int	buffer;

	buffer = head->val;
	head->val = head->nxt->val;
	head->nxt->val = buffer;
	write(1, "sa\n", 3);
}

void	sb(t_stack_node *head)
{
	int	buffer;

	buffer = head->val;
	head->val = head->nxt->val;
	head->nxt->val = buffer;
	write(1, "sb\n", 3);
}

void	ss(t_stack_node *head_a, t_stack_node *head_b)
{
	sa(head_a);
	sb(head_b);
	write(1, "ss\n", 3);
}
