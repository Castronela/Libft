/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:37:30 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 00:22:34 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**

 * @brief Creates duplicate of source string and applies helper function on all
 * characters of duplicate string
 *
 * @param s source string
 * @param f helper function
 * @return resulted string
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmapi;
	int		index;

	if (!s || !f)
		return (NULL);
	strmapi = ft_strdup(s);
	if (!strmapi)
		return (NULL);
	index = -1;
	while (strmapi[++index])
		strmapi[index] = f(index, strmapi[index]);
	return (strmapi);
}
