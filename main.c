/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/28 16:56:06 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	call_atoi(char	*arg, t_list **a, t_list **b)
{
	int	failed;
	int	data;

	data = 0;
	failed = 0;
	data = ft_atoi(arg, &failed);
	if (failed == 1)
		return (-1);
	else
		fill_stack(a, data);
	
	*b = NULL;

	return (1);
}

int	get_numbers_from_strs(char **strs, t_list **a, t_list **b)
{
	int	rs;
	int	failed;
	
	rs = 0;
	failed = 0;
	while (*strs++ != NULL)
	{
		rs = ft_atoi(*strs, &failed);
		if (rs == -1)
			return (-1);
		else
			fill_stack(a, rs);
	}

	*b = NULL;

	return (1);
}	

int	call_split(char *arg, t_list **a, t_list **b)
{
	char **strs;

	strs = ft_split(arg, ' ');
	if (strs == NULL)
		return (-1);
	else
		return get_numbers_from_strs(strs, a, b);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (argc == 2)
			{
				if (call_split(argv[i], &a, &b) == -1)
					return (write(2, "Error\n", 6), 1);
			}
			if (call_atoi(argv[i], &a, &b) == -1)
					return (write(2, "Error\n", 6), 1);
			i++;
		}
	}
	return (0);
}
