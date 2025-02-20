/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:56:40 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:21:09 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
 * @brief Linked list length
 *
 * @param lst starting node
 * @return length of linked list, from starting node
 */
int	ft_lstsize(t_list *lst)
{
	size_t	node_count;

	node_count = 0;
	while (lst)
	{
		node_count++;
		lst = lst->next;
	}
	return (node_count);
}
