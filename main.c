/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:44:19 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/10 22:36:24 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_input(char *str)
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
			exit(1);
		}
	}
}

int	main(int argc, char **argv)
{
	int				i;
	t_stack_node	*a;
	t_stack_node	*b;

	i = 1;
	while (i < argc)
	{
		validate_input(argv[i]);
		i++;
	}
}
