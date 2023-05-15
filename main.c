/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:44:19 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/15 02:59:32 by simao            ###   ########.fr       */
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
	if (argc == 4)
		small_sort();
	if (argc == 6)
		medium_sort();
	if (list_is_sorted(stack_data()->a_head))
		write(1, "OK", 2);
}
