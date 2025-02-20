/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:36:35 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:06:00 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
 * @brief Add node to start of linked list
 *
 * @param lst head of linked list
 * @param new node to add
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
