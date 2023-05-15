/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:29:10 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 18:19:11 by smagalha         ###   ########.fr       */
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
