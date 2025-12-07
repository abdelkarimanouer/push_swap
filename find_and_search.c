/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_search.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:32:05 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/07 13:46:55 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_node_by_rank(t_list *stack, int rank)
{
	while (stack != NULL)
	{
		if (stack->rank == rank)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

t_list	*find_min_node_by_rank(t_list *stack)
{
	t_list	*min;

	min = stack;
	while (stack != NULL)
	{
		if (stack->rank < min->rank)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_list	*find_max_node_by_rank(t_list *stack)
{
	t_list	*max;

	max = stack;
	while (stack != NULL)
	{
		if (stack->rank > max->rank)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
