/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:33:35 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 13:26:50 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*res;
	char	str[] = "lorem ipsum dolor sit amet";

	//res = ft_substr(str, atoi(argv[2]), atoi(argv[3]));
	res = ft_substr("hola", 0, 18446744073709551615);
	printf("%s %lu\n",res, ft_strlen(res));
	free(res);
	return (0);
}
