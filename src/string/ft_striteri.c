/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:29:19 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/19 22:17:16 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies helper function on each character from string
 *
 * @param s string to be modified
 * @param f helper function
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	if (!s || !f)
		return ;
	index = -1;
	while (s[++index])
		f(index, &s[index]);
}
