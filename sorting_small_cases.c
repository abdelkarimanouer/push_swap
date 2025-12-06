/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:24:24 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/06 21:50:04 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_stack_sort(t_list *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
			return (0);
		else
			a = a->next;
	}
	return (1);
}

void	sort_2_3_nodes(t_list **a)
{
	t_list	*max;

	if (count_stack(*a) == 2)
		sa(a);
	if (count_stack(*a) == 3)
	{
		max = find_max_node_by_rank(*a);
		if (max == *a)
			ra(a);
		else if (max == (*a)->next)
			rra(a);
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
}

void	sort_4_nodes(t_list**a, t_list **b)
{
	t_list	*max;

	max = find_max_node_by_rank(*a);
	if (*a == max)
		pb(a, b);
	else if ((*a)->next == max)
	{
		sa(a);
		pb(a, b);
	}
	else if ((*a)->next->next == max)
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->next == max)
	{
		rra(a);
		pb(a, b);
	}
	sort_2_3_nodes(a);
	pa(a, b);
	ra(a);
}
