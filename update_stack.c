/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 23:04:30 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/04 16:48:08 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_ranks_of_nodes(t_list **stack)
{
	t_list	*current;
	t_list	*tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		current = *stack;
		tmp->rank = 0;
		while (current != NULL)
		{
			if (tmp->data > current->data)
				tmp->rank++;
			current = current->next;
		}
		tmp = tmp->next;
	}
}

void	set_index_of_nodes(t_list **stack)
{
	t_list	*tmp;
	int		index;

	tmp = *stack;
	index = 0;
	while (tmp != NULL)
	{
		tmp->index = index;
		tmp = tmp->next;
		index++;
	}
}

t_list	*set_target_a(t_list *a, t_list *b)
{
	t_list	*tmp;
	t_list	*target;

	target = find_min_node_by_rank(b);
	while (a != NULL)
	{
		tmp = b;
		while (tmp != NULL)
		{
			if ((a->data > tmp->data) && (tmp->data > target->data))
				target = tmp;
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (target);
}
