/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:28:54 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:26:11 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Converts uppercase character to its equivalent lowercase
 *
 * @param c character to be converted
 * @return lowercase character
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 'a' - 'A');
	return (c);
}
