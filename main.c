/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/28 10:23:21 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int arr[10] = {0};
	int i = 1;
	int failed = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			arr[i - 1] = ft_atoi(argv[i], &failed);
			if (failed == 1)
			{
				write(2, "Error\n", 6);
				return (1);
			}
			i++;
		}
	}
	return (0);
}
