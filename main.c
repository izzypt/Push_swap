/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:44:19 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/19 00:07:19 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int				i;

	i = 1;
	while (i < argc)
	{
		validate_input(argv[i]);
		i++;
	}
	create_stack_a(argc, argv);
	if (argc < 4)
		smallest_sort();
	else if (argc == 4)
		small_sort();
	else if (argc <= 6)
		medium_sort();
	else
		big_sort();
	if (list_is_sorted(stack()->a))
		write(1, "OK\n", 3);
	printf("Moves: %d\n", stack()->total_actions);
	free_list(stack()->a);
	free_list(stack()->b);
}
