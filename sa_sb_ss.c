/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 05:28:13 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/30 20:46:35 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	int	tmp_data;
	int	tmp_rank;
	
	if (count_stack(*a) <= 1)
		return ;
	tmp_data = (*a)->data;
	tmp_rank = (*a)->rank;
	(*a)->data = ((*a)->next)->data;
	(*a)->rank = ((*a)->next)->rank;
	((*a)->next)->data = tmp_data;
	((*a)->next)->rank = tmp_rank;
}

void	sb(t_list **b)
{
	int	tmp_data;
	int	tmp_rank;
	
	if (count_stack(*b) <= 1)
		return ;
	tmp_data = (*b)->data;
	tmp_rank = (*b)->rank;
	(*b)->data = ((*b)->next)->data;
	(*b)->rank = ((*b)->next)->rank;
	((*b)->next)->data = tmp_data;
	((*b)->next)->rank = tmp_rank;
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}