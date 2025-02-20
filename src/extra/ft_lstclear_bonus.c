/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:26:11 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:09:17 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
 * @brief Remove all content and free all nodes of linked list,
	using a helper function
 *
 * @param lst head of linked list
 * @param del helper function to clear node content
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_index;
	t_list	*node_free;

	if (!lst || !del)
		return ;
	node_index = *lst;
	while (node_index)
	{
		node_free = node_index;
		node_index = node_index->next;
		del(node_free->content);
		free(node_free);
	}
	*lst = NULL;
}
