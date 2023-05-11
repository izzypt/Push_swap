/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:40:01 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/11 16:55:58 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack_node *head)
{
	int	buffer;

	buffer = head->value;
	head->value = head->next->value;
	head->next->value = buffer;
	write(1, "sa", 2);
}

void	sb(t_stack_node *head)
{
	int	buffer;

	buffer = head->value;
	head->value = head->next->value;
	head->next->value = buffer;
	write(1, "sb", 2);
}

void	ss(t_stack_node *head_a, t_stack_node *head_b)
{
	sa(head_a);
	sb(head_b);
	write(1, "ss", 2);
}
