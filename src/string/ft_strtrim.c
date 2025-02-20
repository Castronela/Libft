/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:20:44 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 17:40:36 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int	in_set(const char *set, const char c);

/**
 * @brief Remove leading and trailing characters, specified in set,
	from a string
 *
 * @param s1 source string
 * @param set characters to be trimmed
 * @return allocated trimmed string
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;

	if (!s1)
		return (NULL);
	start_index = 0;
	end_index = ft_strlen(s1) - 1;
	while (set && start_index <= end_index)
	{
		if (in_set(set, s1[start_index]))
			start_index++;
		else if (in_set(set, s1[end_index]))
			end_index--;
		else
			break ;
	}
	return (ft_substr(s1, start_index, end_index - start_index + 1));
}

static int	in_set(const char *set, const char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
