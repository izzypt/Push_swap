/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:44:19 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/11 20:41:43 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int				i;
	t_stack_node	*head;

	i = 1;
	while (i < argc)
	{
		validate_input(argv[i]);
		i++;
	}
	head = create_stack_a(argc, argv);
	write(1, "Original List: ", 15);
	print_list(head);
	write(1, "\n", 1);
	sa(head);
	write(1, "\n", 1);
	print_list(head);
	write(1, "\n", 1);
	ra(head);
	write(1, "\n", 1);
	print_list(head);
}
