/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/04 14:12:00 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	start_and_fill_a(int argc, char **argv, t_list **a)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		if (call_split(argv[i], a) == -1)
			return (1);
	}
	else
	{
		while (i < argc)
		{
			if (call_atoi(argv[i], a) == -1)
				return (1);
			i++;
		}
	}
	return (0);
}

static void	handle_3_case(t_list **a)
{
	t_list	*max;

	max = find_max_node_by_rank(*a);
	if (max == *a)
		ra(a);
	else if (max == (*a)->next)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

static int	handle_2_3_case(t_list **a)
{
	if (count_stack(*a) == 2)
	{
		sa(a);
		return (1);
	}
	if (count_stack(*a) == 3)
	{
		handle_3_case(a);
		return (1);
	}
	else
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
		if (start_and_fill_a(argc, argv, &a))
			return (free_stack(&a), free_stack(&b), write(2, "Error\n", 6), 1);
		get_ranks_of_nodes(&a);
		set_index_of_nodes(&a);
		if (check_if_stack_sort(a))
			return (free_stack(&a), free_stack(&b), 0);
		if (handle_2_3_case(&a))
			return (free_stack(&a), free_stack(&b), 0);

		free_stack(&a);
		free_stack(&b);
	}
	return (0);
}
