/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:16:44 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/10 11:37:44 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*tmp;
	t_list	*current;

	if (!a || !*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	if (*a != NULL)
		(*a)->prev = NULL;
	current = *a;
	while (current->next != NULL)
		current = current->next;
	tmp->next = NULL;
	current->next = tmp;
	tmp->prev = current;
}

void	rb(t_list **b)
{
	t_list	*tmp;
	t_list	*current;

	if (!b || !*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	if (*b != NULL)
		(*b)->prev = NULL;
	current = *b;
	while (current->next != NULL)
		current = current->next;
	tmp->next = NULL;
	current->next = tmp;
	tmp->prev = current;
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}
