/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:19:29 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 15:16:25 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	should_be_equal(char c);
int	test_strlcpy(void);
int	test_strlcat(void);
int	test_strchr(void);

int	main(void)
{
	int	results;

	results = 0;
	for(int i = 0; i < 127; i++)
	{
		results += should_be_equal(i);
	}
	results += test_strlcpy();
	results += test_strlcat();
	results += test_strchr();
	if (results == 0)
		printf("All tests succeeded\n");
	else
		printf("There are some errors\n");
	return (0);
}
