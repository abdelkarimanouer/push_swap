/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/29 10:21:28 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (argc == 2)
		{
			if (call_split(argv[i], &a, &b) == -1)
				return (write(2, "Error\n", 6), 1);
		}
		else
		{
			while (i < argc)
			{
				if (call_atoi(argv[i], &a, &b) == -1)
					return (write(2, "Error\n", 6), 1);
				i++;
			}
		}
	}
	return (0);
}
