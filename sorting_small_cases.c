/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:24:24 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/07 14:02:19 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_stack_sort(t_list *a)
{
	if (!a)
		return (0);
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

void	sort_4_nodes(t_list **a, t_list **b)
{
	t_list	*min;

	min = find_min_node_by_rank(*a);
	if (*a == min)
		pb(a, b);
	else if ((*a)->next == min)
	{
		sa(a);
		pb(a, b);
	}
	else if ((*a)->next->next == min)
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->next == min)
	{
		rra(a);
		pb(a, b);
	}
	if (!check_if_stack_sort(*a))
		sort_2_3_nodes(a);
	pa(a, b);
}

void	sort_5_nodes(t_list **a, t_list **b)
{
	t_list	*min;

	min = find_min_node_by_rank(*a);
	if (*a == min)
		pb(a, b);
	else if ((*a)->next == min)
	{
		sa(a);
		pb(a, b);
	}
	else if ((*a)->next->next == min)
	{
		rra(a);
		rra(a);
		rra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->next == min)
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->next->next == min)
	{
		rra(a);
		pb(a, b);
	}
	if (!check_if_stack_sort(*a))
		sort_4_nodes(a, b);
	pa(a, b);
}
