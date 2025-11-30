/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouer <aanouer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:09:57 by aanouer           #+#    #+#             */
/*   Updated: 2025/11/30 03:20:05 by aanouer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct st_linked_list
{
	int						data;
	int						index;
	int						target_index;
	int						cost_a;
	int						cost_b;
	struct st_linked_list	*prev;
	struct st_linked_list	*next;
}	t_list;

// work with linked list
t_list	*ft_new_node(int data);
void	fill_stack(t_list **a, int data);
void	free_stack(t_list **stack);

// handle and get inputs
int		is_dublicate(t_list **a, int data);
int		is_dublicate(t_list **a, int data);
int		call_atoi(char	*arg, t_list **a);
int		get_numbers_from_strs(char **strs, t_list **a);
int		call_split(char *arg, t_list **a);

// helper function
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str, int *failed);
void	free_strs(char **arr);

#endif