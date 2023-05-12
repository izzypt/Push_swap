/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:44:19 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/12 16:01:27 by simao            ###   ########.fr       */
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
	write(1, "Original List: ", 15);
	print_list(stack_data()->a_head);
	write(1, "\n", 1);
	ra(stack_data()->a_head);
	print_list(stack_data()->a_head);
	write(1, "\n", 1);
	pb();
	print_list(stack_data()->a_head);
	write(1, "\n", 1);
	print_list(stack_data()->b_head);
}
