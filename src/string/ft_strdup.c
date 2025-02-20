/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:34:53 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 22:14:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Creates a duplicate of a string
 *
 * @param s1 source string
 * @return allocated duplicate string
 */
char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	s1_len;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	duplicate = malloc(sizeof(*duplicate) * (s1_len + 1));
	if (duplicate)
		ft_strlcpy(duplicate, s1, s1_len + 1);
	return (duplicate);
}
