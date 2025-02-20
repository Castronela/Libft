/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:57:58 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:33:27 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
 * @brief Create substring from source string
 *
 * @param s source string
 * @param start starting index of substring
 * @param len length of substring
 * @return allocated substring
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	substr_index;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		len = 0;
	else if (s_len - start < len)
		len = (s_len - start);
	substr = malloc((len + 1) * sizeof(*substr));
	if (!substr)
		return (NULL);
	substr_index = 0;
	while (len--)
		substr[substr_index++] = s[start++];
	substr[substr_index] = 0;
	return (substr);
}
