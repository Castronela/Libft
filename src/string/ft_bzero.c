/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:55:52 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:36:56 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Initializes number of bytes of a pointer to 0
 *
 * @param s pointer to be modified
 * @param n number of bytes to be modified
 */
void	ft_bzero(void *s, size_t n)
{
	char	*s_string;

	s_string = s;
	while (s_string && n--)
		*s_string++ = 0;
}
