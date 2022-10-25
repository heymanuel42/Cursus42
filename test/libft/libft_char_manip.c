/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char_manip.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:39:45 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 10:48:48 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int is_equal(int (f)(int), int(f2)(int),char c){

	printf("%d\n" ,f(c));
	if(f(c) == f2(c))
	{
		printf("Test OK\n");
		return 0;
	}
	else
	{
		printf("Test Failed got %d expected %d for character %d \n ",f(c),f2(c), c);
		return 1;
	}
}

/// @brief compare results between system call and libft
/// @param c 
int	should_be_equal(char c)
{
	int r = 0;
	printf("isalpha should_be_equal\n");
	r += is_equal(ft_isalpha, isalpha, c);

	printf("isalnum should_be_equal\n");
	r += is_equal(ft_isalnum, isalnum, c);

	printf("isascii should_be_equal\n");
	r += is_equal(ft_isascii, isascii, c);

	printf("isdigit should_be_equal\n");
	r += is_equal(ft_isdigit, isdigit, c);

	printf("isprint should_be_equal\n");
	r += is_equal(ft_isprint, isprint, c);

	printf("tolower should_be_equal\n");
	r += is_equal(ft_tolower, tolower, c);

	printf("toupper should_be_equal\n");
	r += is_equal(ft_toupper, toupper, c);

	return r;
}
