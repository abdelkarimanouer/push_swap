/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:24:24 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/01 11:40:02 by aanouer          ###   ########.fr       */
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
