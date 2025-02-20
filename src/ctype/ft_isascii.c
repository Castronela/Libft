/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:59:40 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:24:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks if character is in ASCII
 *
 * @param c character to be checked
 * @return boolean
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
