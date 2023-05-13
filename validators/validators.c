/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:26:26 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/13 18:12:21 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	validate_input(char *str)
{
	int		i;

	i = 0;
	ft_atoi(str);
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && i == 0)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			error_and_exit();
	}
	return (1);
}

void	check_duplicates(void)
{
	t_stack_node	*curr;
	t_stack_node	*next;

	curr = stack_data()->a_head;
	while (curr)
	{
		next = curr->next;
		while (next)
		{
			if (curr->value == next->value)
				error_and_exit();
			next = next->next;
		}
		curr = curr->next;
	}
}
