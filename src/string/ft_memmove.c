/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:58:42 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:35:57 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Move n bytes from source to destination memory area
 *
 * @param dst destination memory area
 * @param src source memory area
 * @param n number of bytes to be moved
 * @return pointer to destination memory area
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*c_dst;
	const char	*c_src;
	size_t		index;
	
	if (!dst || !src)
		return (NULL);
	c_dst = dst;
	c_src = src;
	if (c_dst > c_src)
	{
		while (n--)
			c_dst[n] = c_src[n];
	}
	else
	{
		index = -1;
		while (++index < n)
			c_dst[index] = c_src[index];
	}
	return (dst);
}
