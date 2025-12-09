/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/09 18:00:35 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	fill_a_by_inputs(int argc, char **argv, t_list **a)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		if (argv[i][0] == '\0')
			return (1);
		while (i < argc)
		{
			if (call_split(argv[i], a) == -1)
				return (1);
			i++;
		}
	}
	return (0);
}

int	sort_small_cases(t_list **a, t_list **b)
{
	if (count_stack(*a) == 2 || count_stack(*a) == 3)
		return (sort_2_3_nodes(a), 1);
	else if (count_stack(*a) == 4)
		return (sort_4_nodes(a, b), 1);
	else if (count_stack(*a) == 5)
		return (sort_5_nodes(a, b), 1);
	else
		return (0);
}

static void	return_numbers_to_a(t_list **a, t_list **b)
{
	t_list	*max;
	int		position_of_max;
	int		size_b;

	while (*b)
	{
		max = find_max_node_by_rank(*b);
		position_of_max = get_node_position(*b, max);
		size_b = count_stack(*b);
		if (position_of_max <= size_b / 2)
		{
			while (position_of_max-- > 0)
				rb(b);
		}
		else
		{
			while (position_of_max++ < size_b)
				rrb(b);
		}
		pa(a, b);
	}
}

static void	start_algo_chunks(t_list **a, t_list **b)
{
	int	pushed_count;
	int	numbers_in_chunk;

	pushed_count = 0;
	if (count_stack(*a) <= 100)
		numbers_in_chunk = 16;
	else
		numbers_in_chunk = 36;
	while (*a)
	{
		if ((*a)->rank <= pushed_count + numbers_in_chunk)
		{
			pb(a, b);
			if ((*b)->rank < pushed_count)
				rb(b);
			pushed_count++;
		}
		else
			ra(a);
	}
	return_numbers_to_a(a, b);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (fill_a_by_inputs(argc, argv, &a))
		return (free_stack(&a), free_stack(&b), write(2, "Error\n", 6), 1);
	set_ranks_of_nodes(&a);
	if (check_if_stack_sort(a))
		return (free_stack(&a), free_stack(&b), 0);
	if (sort_small_cases(&a, &b))
		return (free_stack(&a), free_stack(&b), 0);
	start_algo_chunks(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
