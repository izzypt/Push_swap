/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:26:26 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/11 16:27:02 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	validate_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && i == 0)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			write(1, "Error", 5);
			return (0);
			exit(1);
		}
	}
	return (1);
}
