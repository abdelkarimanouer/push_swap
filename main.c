/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/28 16:04:07 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	call_atoi(char	*arg)
{
	int	failed;
	int	data;

	data = 0;
	failed = 0;
	data = ft_atoi(arg, &failed);
	if (failed == 1)
		return (-1);
	return data;
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;
	int		data;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (argc == 2)
			{
				// call split here.
				// if (arr == NULL)
				// {
				// 	write(2, "Error\n", 6);
				// 	return (1);
				// }
			}
			else
			{
				data = call_atoi(argv[i]);
				if (data == -1)
				{
					write(2, "Error\n", 6);
					return (1);
				}
				else
					fill_stack(&a, data);
			}
			i++;
		}
	}
	return (0);
}
