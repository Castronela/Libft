/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:09:42 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 21:54:47 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Copies n bytes from source to destination memory area
 *
 * @param dst destination memory area
 * @param src source memory area
 * @param n number of bytes to be copied
 * @return pointer to destination memory area
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	if (!dst || !src)
		return (NULL);
	c_dst = dst;
	c_src = src;
	while (n--)
		*c_dst++ = *c_src++;
	return (dst);
}
