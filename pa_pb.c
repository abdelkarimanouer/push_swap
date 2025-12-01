/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:10:10 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/01 10:07:43 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (count_stack(*b) < 1)
		return ;
	tmp = *b;
	*b = (*b)->next;
	if (*b != NULL)
		(*b)->prev = NULL;
	tmp->next = (*a);
	if (*a != NULL)
		(*a)->prev = tmp;
	*a = tmp;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	if (count_stack(*a) < 1)
		return ;
	tmp = *a;
	*a = (*a)->next;
	if (*a != NULL)
		(*a)->prev = NULL;
	tmp->next = *b;
	if (*b != NULL)
		(*b)->prev = tmp;
	*b = tmp;
}
