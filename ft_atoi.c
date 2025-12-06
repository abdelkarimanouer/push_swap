/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:14:45 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/06 21:14:36 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_null_or_empty(const char *str)
{
	if (str == NULL)
		return (1);
	if (str[0] == '\0')
		return (1);
	return (0);
}

static int	skipp_ws_sign(const char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

static void	is_failed(char c, int *failed)
{
	if (c != '\0')
		*failed = 1;
	else
		*failed = 0;
}

int	ft_atoi(const char *str, int *failed)
{
	int			i;
	long		rs;
	int			sign;

	if (is_null_or_empty(str))
		return (*failed = 1, 0);
	rs = 0;
	sign = 1;
	i = skipp_ws_sign(str, &sign);
	if (str[i] == '\0')
		return (*failed = 1, 0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		rs = rs * 10 + (str[i] - '0');
		if (rs / 10 > INT_MAX)
			return (*failed = 1, 0);
		i++;
	}
	if ((rs * sign) > INT_MAX || (rs * sign) < INT_MIN)
		return (*failed = 1, 0);
	is_failed(str[i], failed);
	return ((int)(rs * sign));
}
