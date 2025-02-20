/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:42 by dstinghe          #+#    #+#             */
/*   Updated: 2025/02/20 01:29:31 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

static int	char_count(char const *str, char c);
static int	word_count(char const *str, char c);
static void	free_memory(char **array);

/**
 * @brief Splits string into words
 *
 * @param s string to be split
 * @param c word delimiter
 * @return double char pointer ending with a NULL pointer
 */
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		rows;
	int		word_nr;

	if (!s)
		return (NULL);
	word_nr = word_count(s, c);
	split = malloc((word_nr + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[word_nr] = NULL;
	rows = 0;
	while (rows < word_nr)
	{
		if (*s != c)
		{
			split[rows] = ft_substr(s, 0, char_count(s, c));
			if (split[rows] == NULL)
				return (free_memory(split), NULL);
			s += char_count(s, c);
			rows++;
		}
		s++;
	}
	return (split);
}

static int	char_count(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static int	word_count(char const *str, char c)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (str[index])
	{
		if (str[index] != c)
		{
			count++;
			while (str[index] && str[index] != c)
				index++;
		}
		else
			index++;
	}
	return (count);
}

static void	free_memory(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
