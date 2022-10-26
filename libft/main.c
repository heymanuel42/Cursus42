/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:33:35 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 16:02:44 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char t[] = "HelloxxxxWorldxxxS";
	char **s = ft_split(t, 'a');
	int i = 0;

	while (s[i] != NULL)
	{
		printf("%s\n", s[i]);
		i++;
	}
	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	return (0);
}
