/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:40:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/11 23:10:53 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack_node *head)
{
	int	buffer;

	buffer = head->value;
	head->value = head->next->value;
	head->next->value = buffer;
	write(1, "sa\n", 3);
}

void	sb(t_stack_node *head)
{
	int	buffer;

	buffer = head->value;
	head->value = head->next->value;
	head->next->value = buffer;
	write(1, "sb\n", 3);
}

void	ss(t_stack_node *head_a, t_stack_node *head_b)
{
	sa(head_a);
	sb(head_b);
	write(1, "ss", 2);
}
