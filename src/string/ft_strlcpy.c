/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:59:03 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 00:10:54 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Copies dstsize number of characters from source to destination string
 *
 * @param dst destination string
 * @param src source string
 * @param dstsize number of characters to copy (including null terminator)
 * @return length of source string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	fin_size;
	size_t	i;

	if (!dst)
		return (0);
	fin_size = ft_strlen(src);
	i = -1;
	while ((++i + 1 < dstsize) && src[i])
		dst[i] = src[i];
	if (dstsize)
		dst[i] = '\0';
	return (fin_size);
}
