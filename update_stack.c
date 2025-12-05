/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 23:04:30 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/05 20:44:39 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_ranks_of_nodes(t_list **stack)
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
