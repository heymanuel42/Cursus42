/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:33:35 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 19:18:25 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char test[] = "xxxxHelloxxxx";
	char *res;

	res = ft_strtrim(test, "x");
	printf("%s\n",res);
	free(res);
	return (0);
}
