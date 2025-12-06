/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/06 11:44:50 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	fill_a_by_inputs(int argc, char **argv, t_list **a)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		if (argv[i][0] == '\0')
			return (1);
		if (call_split(argv[i], a) == -1)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		if (fill_a_by_inputs(argc, argv, &a))
			return (free_stack(&a), free_stack(&b), write(2, "Error\n", 6), 1);
		set_ranks_of_nodes(&a);
		if (check_if_stack_sort(a))
			return (free_stack(&a), free_stack(&b), 0);
		if (sort_2_3_nodes(&a))
			return (free_stack(&a), free_stack(&b), 0);
		
		free_stack(&a);
		free_stack(&b);
	}
	return (0);
}
