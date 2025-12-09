/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:08:45 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/09 18:07:43 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*current;

	while (*stack != NULL)
	{
		current = (*stack)->next;
		free(*stack);
		(*stack) = current;
	}
	*stack = NULL;
}

t_list	*ft_new_node(int data)
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

int	count_stack(t_list *stack)
{
	int	count;

	if (stack == NULL)
		return (0);
	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

void	fill_stack(t_list **a, int data)
{
	t_list	*new;
	t_list	*current;

	new = ft_new_node(data);
	if (new == NULL)
		return ;
	if (*a == NULL)
	{
		*a = new;
		return ;
	}
	current = *a;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;
}

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
