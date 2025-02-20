/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:46:54 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 20:24:30 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks if character is a digit
 *
 * @param c character to be checked
 * @return boolean
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
