/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:07:46 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:24:39 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks if character is printable
 *
 * @param c character to be checked
 * @return boolean
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
