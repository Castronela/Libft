/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:31:32 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:43:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief Converts initial portion of string to an integer
 *
 * @param nptr source string
 * @return converted integer
 */
int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	if (!nptr)
		return (0);
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	num = 0;
	while (*nptr >= '0' && *nptr <= '9')
		num = num * 10 + (*nptr++) - '0';
	return (num * sign);
}
