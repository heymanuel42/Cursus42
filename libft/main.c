/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:33:35 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 16:45:36 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char s1[] = "salut";
	char s2[] = "hello";
	char *res;

	res = ft_strjoin(s1,s2);
	printf("%s\n",res);
	free(res);
	return (0);
}
