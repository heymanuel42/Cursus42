/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:01:44 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 14:34:22 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	getnextsep(const char *str, char sep)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep)
			return (i);
		i++;
	}
	return (i);
}

int	ft_isspace(char *str)
{
	while (*str == '\t'
		|| *str == '\n'
		|| *str == '\v'
		|| *str == '\f'
		|| *str == '\r'
		|| *str == 127
		|| *str == ' ')
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}

int	count_words(const char *str, char sep)
{
	int		i;
	int		nwords;

	i = 0;
	nwords = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep)
		{
				++nwords;
		}
		i++;
	}
	return (++nwords);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*sub;
	int		nwords;
	int		i;
	int		sepidx;

	sub = NULL;
	nwords = count_words(s, c);
	array = (char **)malloc((nwords + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (nwords > 0)
	{
		sepidx = getnextsep(s, c);
		sub = ft_substr(s, 0, sepidx);
		if (!ft_isspace(sub))
			array[i++] = sub;
		else
			free(sub);
		s += 1 + sepidx;
		nwords--;
	}
	array[i] = NULL;
	if (i != nwords)
		while (i < nwords)
			free(array[i++]);
	return (array);
}
