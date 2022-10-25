/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:19:29 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 13:57:49 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	should_be_equal(char c);

int	main(void)
{
	int	results;

	results = 0;
	for(int i = 0; i < 100; i++)
	{
		printf("Testnig char %c \n", i);
		results += should_be_equal(i);
	}
	if (results == 0)
		printf("All tests succeeded\n");
	else
		printf("There are some errors\n");
	return (0);
}
