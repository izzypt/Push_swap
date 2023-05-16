/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:29:10 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 12:45:26 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_data	*stack(void)
{
	static t_stack_data	data;

	return (&data);
}

void	error_and_exit(void)
{
	write(1, "Error", 5);
	exit(1);
}

int	value_at(int index)
{
	int				i;
	t_stack_node	*lst;

	i = 0;
	lst = stack()->tmp;
	if (index == list_len(lst))
		index -= 1;
	while (lst)
	{
		if (i == index)
			return (lst->val);
		i++;
		lst = lst->nxt;
	}
	return (-1);
}
