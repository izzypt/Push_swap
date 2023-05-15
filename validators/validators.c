/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:26:26 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 18:33:05 by smagalha         ###   ########.fr       */
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
	t_stack_node	*nxt;

	curr = stack_data()->a;
	while (curr)
	{
		nxt = curr->nxt;
		while (nxt)
		{
			if (curr->val == nxt->val)
				error_and_exit();
			nxt = nxt->nxt;
		}
		curr = curr->nxt;
	}
}
