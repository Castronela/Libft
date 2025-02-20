/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:47:54 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 00:11:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Scans haystack for first instance of matching len characters of needle
 *
 * @param haystack string to be scanned
 * @param needle pattern
 * @param len max number of characters to be scanned
 * @return pointer to matched string of chars or NULL
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack)
		return (NULL);
	needle_len = ft_strlen(needle);
	while (*haystack && needle_len <= len--)
	{
		if (!needle || !ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
