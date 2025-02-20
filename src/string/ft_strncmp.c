/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:33:24 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:08:25 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Compares n characters of 2 strings
 *
 * @param s1 string to be compared
 * @param s2 string to be compared
 * @param n number of characters to be compared
 * @return 0 on match or result of subtraction between compared characters
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (!s1 || !s2)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n-- && (*str1 || *str2))
	{
		if (*str1 - *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
