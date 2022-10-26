/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:59:18 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 13:31:07 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*begin;
	size_t	i;

	if (start + len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof (char));
	if (sub == NULL)
		return (NULL);
	begin = sub;
	i = 0;
	while (i < len && (i + start) < ft_strlen(s))
	{
		*sub = s[i + start];
		i++;
		sub++;
	}
	*sub = '\0';
	return ((char *)begin);
}
