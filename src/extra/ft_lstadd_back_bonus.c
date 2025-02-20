/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:36:22 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:05:49 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
 * @brief Add node to end of linked list
 *
 * @param lst head of linked list
 * @param new node to add
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new || !lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last_node = *lst;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new;
}
