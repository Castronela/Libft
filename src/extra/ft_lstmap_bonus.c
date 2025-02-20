/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:21:38 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 00:22:08 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**

 * @brief Creates copy of linked list and apply helper function on all 
 * content; clears linked list on allocation failure.
 *
 * @param lst starting source node
 * @param f helper function for content modification
 * @param del helper function for content and linked list removal
 * @return linked list copy with modified content
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_lst;
	t_list	*new_node;

	result_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (lst->content)
		{
			new_node = ft_lstnew(f(lst->content));
			if (!new_node)
			{
				ft_lstclear(&result_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&result_lst, new_node);
		}
		lst = lst->next;
	}
	return (result_lst);
}
