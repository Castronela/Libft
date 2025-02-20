/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:26:48 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:26:35 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Converts lowercase character to its equivalent uppercase
 *
 * @param c character to be converted
 * @return uppercase character
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c += 'A' - 'a');
	return (c);
}
