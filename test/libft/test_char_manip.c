/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char_manip.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:39:45 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 14:50:29 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int	is_equal(int (f)(int), int (f2)(int), char c, char *func)
{
	if (f(c) == f2(c))
		return (0);
	printf("%s Test Failed got %d expected %d for character %d \n ",
		func, f(c), f2(c), c);
	return (1);
}

/// @brief compare results between system call and libft
/// @param c 
int	should_be_equal(char c)
{
	int	r;

	r = 0;
	r += is_equal(ft_isalpha, isalpha, c, "isalpha");
	r += is_equal(ft_isalnum, isalnum, c, "isalnum");
	r += is_equal(ft_isascii, isascii, c, "isascii");
	r += is_equal(ft_isdigit, isdigit, c, "isdigit");
	r += is_equal(ft_isprint, isprint, c, "isprint");
	r += is_equal(ft_tolower, tolower, c, "tolower");
	r += is_equal(ft_toupper, toupper, c, "toupper");
	return (r);
}
