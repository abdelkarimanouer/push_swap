/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:10:27 by aanouer           #+#    #+#             */
/*   Updated: 2025/12/08 16:35:14 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	getsize(char const *s, char c)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (c != s[i])
		{
			size++;
			while (c != s[i] && s[i])
				i++;
		}
		else
			i++;
	}
	return (size);
}

static int	skip(size_t i, char c, char const *s)
{
	while (c != s[i] && s[i])
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] != '-' && s[i] != '+'))
			return (-1);
		i++;
	}
	return (i);
}

void	free_strs(char **arr)
{
	size_t	index;

	index = 0;
	while (arr[index])
	{
		free(arr[index]);
		arr[index] = NULL;
		index++;
	}
	free(arr);
	arr = NULL;
}

static int	fill_arr(char **arr, char const *s, char c)
{
	int		i;
	int		index;
	size_t	start;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (c != s[i])
		{
			start = i;
			i = skip(i, c, s);
			if (i == -1)
				return (free_strs(arr), 0);
			arr[index] = ft_substr(s, start, i - start);
			if (!arr[index])
				return (free_strs(arr), 0);
			index++;
		}
		else
			i++;
	}
	arr[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		size;
	int		i;

	if (!s)
		return (NULL);
	size = getsize(s, c) + 1;
	arr = malloc(sizeof(char *) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
		arr[i++] = NULL;
	if (fill_arr(arr, s, c))
		return (arr);
	else
		return (NULL);
}
