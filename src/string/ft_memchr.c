/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:48:09 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 16:33:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Scan n bytes from pointer for instance of c
 *
 * @param s pointer to be scanned
 * @param c target pattern
 * @param n number of bytes to be scanned
 * @return pointer to matching instance or NULL
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	if (!s)
		return (NULL);
	str = s;
	while (--n && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char)c)
		return ((void *)str);
	return (NULL);
}
