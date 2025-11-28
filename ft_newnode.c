/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:07:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/28 16:04:26 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_new_node(void *data)
{
	t_list	*node;

	node = malloc (sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->data = data;
	node->next = NULL;
	return (node);
}
