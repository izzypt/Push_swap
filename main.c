/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:44:19 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/17 16:32:57 by simao            ###   ########.fr       */
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
	create_stack_tmp(argc, argv);
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
	/*printf("stack a mean: %d\n", mean(stack()->a));
	best_move(stack()->a, 85);*/
}
