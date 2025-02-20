/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:20:20 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 16:50:20 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Initializes n bytes of memory area with c
 *
 * @param b pointer to memory area
 * @param c value to be initialized with
 * @param len number of bytes
 * @return pointer to initialized memory area
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;

	if (!b)
		return (NULL);
	bb = b;
	while (len--)
		*bb++ = (unsigned char)c;
	return (b);
}
