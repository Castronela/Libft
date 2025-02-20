/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:42:22 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 19:57:46 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

static size_t	my_numlen(long long n);

/**
 * @brief Convert integer to string
 *
 * @param n integer
 * @return allocated string
 */
char	*ft_itoa(int n)
{
	char		*str;
	long long	nb;
	int			index;

	nb = (long long)n;
	index = my_numlen(nb);
	str = malloc((index + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	str[index] = 0;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[--index] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}

static size_t	my_numlen(long long n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
