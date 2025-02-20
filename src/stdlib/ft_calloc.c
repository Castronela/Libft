/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:03 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 21:18:11 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief Allocates pointer and sets memory to 0
 *
 * @param nmemb number of members
 * @param size size of each member
 * @return allocated pointer
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_ptr;

	new_ptr = malloc(nmemb * size);
	if (new_ptr)
		ft_bzero(new_ptr, nmemb * size);
	return (new_ptr);
}
