/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:19:26 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:38:25 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Appends source to destination string
 *
 * @param dst destination string
 * @param src source string
 * @param buffer
 * @return length of supposed resulting string
 */
size_t	ft_strlcat(char *dst, const char *src, size_t buffer)
{
	size_t	dst_len;
	size_t	src_len;

	if (!dst)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst += dst_len;
	while ((dst_len + 1) < buffer && *src)
	{
		*dst++ = *src++;
		buffer--;
	}
	*dst = '\0';
	if (dst_len > buffer)
		return (src_len + buffer);
	return (dst_len + src_len);
}
