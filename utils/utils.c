/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:29:10 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 02:18:20 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_data	*stack_data(void)
{
	static t_stack_data	data;

	return (&data);
}

void	error_and_exit(void)
{
	write(1, "Error", 5);
	exit(1);
}

int	list_max_value(t_stack_node *head)
{
	t_stack_node	*curr;
	int				max;

	curr = head;
	max = 0;
	while (curr)
	{
		if (curr->val > max)
			max = curr->val;
		curr = curr->nxt;
	}
	return (max);
}
