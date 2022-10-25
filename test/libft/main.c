/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:19:29 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 17:31:05 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int	should_be_equal(char c);
int	test_strlcpy(void);
int	test_strlcat(void);
int	test_strchr(void);
int	test_strncmp(void);

int	main(void)
{
	int	results;

	results = 0;
	for(int i = 0; i < 127; i++)
	{
		//results += should_be_equal(i);
	}
	results += test_strlcpy();
	printf("%d strlcpy\n", results);
	results += test_strlcat();
	printf("%d strlcat\n", results);
	results += test_strchr();
	printf("%d strchr\n", results);
	results += test_strncmp();
	printf("%d strncmp\n", results);

	if (results == 0)
		printf("All tests succeeded\n");
	else
		printf("There are some errors\n");


	return (0);
}
