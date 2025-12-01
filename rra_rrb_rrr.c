/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:52:56 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/01 11:12:07 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*current;

	if (count_stack(*a) <= 1)
		return ;
	current = *a;
	while (current->next != NULL)
		current = current->next;
	current->next = *a;
	current->prev->next = NULL;
	current->prev = NULL;
	(*a) = current;
}

void	rrb(t_list **b)
{
	t_list	*current;

	if (count_stack(*b) <= 1)
		return ;
	current = *b;
	while (current->next != NULL)
		current = current->next;
	current->next = *b;
	current->prev->next = NULL;
	current->prev = NULL;
	(*b) = current;
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
