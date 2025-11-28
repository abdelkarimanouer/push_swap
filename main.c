/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:23:19 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/28 14:52:04 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;
	int		failed;
	char	**arr;
	int		arrint[10];

	a = NULL;
	b = NULL;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (argc == 2)
			{
				arr = ft_split(argv[i], 32);
				if (arr == NULL)
				{
					write(2, "Error\n", 6);
					return (1);
				}
			}
			else
			{
				arrint[i - 1] = ft_atoi(argv[i], &failed);
				if (failed == 1)
				{
					write(2, "Error\n", 6);
					return (1);
				}
			}
			i++;
		}
	}
	return (0);
}
