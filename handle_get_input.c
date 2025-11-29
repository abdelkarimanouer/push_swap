/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_get_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 10:14:15 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/29 10:21:31 by aanouer          ###   ########.fr       */
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

int	call_atoi(char	*arg, t_list **a, t_list **b)
{
	int	failed;
	int	data;

	data = 0;
	failed = 0;
	data = ft_atoi(arg, &failed);
	if (failed == 1 || is_dublicate(a, data))
		return (free_stack(a), -1);
	else
		fill_stack(a, data);
	return (1);
}

int	get_numbers_from_strs(char **strs, t_list **a, t_list **b)
{
	int	data;
	int	failed;
	int	i;

	data = 0;
	failed = 0;
	i = 0;
	while (strs[i] != NULL)
	{
		data = ft_atoi(strs[i], &failed);
		if (failed == 1 || is_dublicate(a, data))
			return (free_stack(a), free_strs(strs), -1);
		else
			fill_stack(a, data);
		i++;
	}
	free_strs(strs);
	return (1);
}

int	call_split(char *arg, t_list **a, t_list **b)
{
	char	**strs;

	strs = ft_split(arg, ' ');
	if (strs == NULL)
		return (-1);
	else
		return (get_numbers_from_strs(strs, a, b));
}
