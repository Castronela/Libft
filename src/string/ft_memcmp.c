/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:44:46 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 16:50:41 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Compares n bytes of 2 memory areas
 *
 * @param s1 pointer to first memory area
 * @param s2 pointer to second memory area
 * @param n number of bytes to be compared
 * @return 0 on total byte match or result of subtraction between compared bytes
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (!s1 || !s2)
		return (0);
	str1 = s1;
	str2 = s2;
	while (n--)
	{
		if (*str1 - *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
