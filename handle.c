/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 10:14:15 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/29 10:16:59 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dublicate(t_list **a, int data)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp != NULL)
	{
		if (data == tmp->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
