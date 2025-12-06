/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:24:24 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/04 15:16:29 by aanouer          ###   ########.fr       */
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

int	sort_2_3_nodes(t_list **a)
{
	t_list	*max;

	if (count_stack(*a) == 2)
	{
		sa(a);
		return (1);
	}
	if (count_stack(*a) == 3)
	{
		max = find_max_node_by_rank(*a);
		if (max == *a)
			ra(a);
		else if (max == (*a)->next)
			rra(a);
		if ((*a)->data > (*a)->next->data)
			sa(a);
		return (1);
	}
	else
		return (0);
}
