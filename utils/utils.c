/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:29:10 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/16 22:39:05 by smagalha         ###   ########.fr       */
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
	write(2, "Error\n", 6);
	exit(1);
}
