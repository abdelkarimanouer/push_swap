/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/30 02:54:32 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	start_the_code(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		if (call_split(argv[i], &a) == -1)
			return (write(2, "Error\n", 6), 1);
	}
	else
	{
		while (i < argc)
		{
			if (call_atoi(argv[i], &a) == -1)
				return (write(2, "Error\n", 6), 1);
			i++;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (start_the_code(argc, argv))
		return (1);
	return (0);
}
