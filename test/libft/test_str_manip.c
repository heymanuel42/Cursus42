/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_manip.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:54 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 15:25:05 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	test_strlcpy(void)
{
	char	dst[300] = "salut";
	int	res = ft_strlcpy(dst,"test",20);
	char	dst2[300] = "salut";
	int	res2 = strlcpy(dst2,"test",20);

	char	dst3[4] = "";
	int	res3 = ft_strlcpy(dst3,"test",0);
	char	dst4[4] = "";
	int	res4 = strlcpy(dst4,"test",0);

	return (!((res == res2) && (res3 == res4)));
}

int	test_strlcat(void)
{
	char	dst[300] = "salut";
	int	res = ft_strlcat(dst,"test",20);
	char	dst2[300] = "salut";
	int	res2 = strlcat(dst2,"test",20);

	char	dst3[4] = "";
	int	res3 = ft_strlcat(dst3,"test",0);
	char	dst4[4] = "";
	int	res4 = strlcat(dst4,"test",0);

	return (!((res == res2) && (res3 == res4)));
}

int	test_atoi(void)
{
	return (!(
			ft_atoi("\t001") == atoi("\t001")
			&& ft_atoi("--123442") == atoi("--123442")
			&& ft_atoi("41745123784654123") == atoi("41745123784654123")
			&& ft_atoi("- 4324") == atoi("- 4324")
			&& ft_atoi("--") == atoi("--")
			&& ft_atoi("f423432") == atoi("f423432")
			&& ft_atoi("+f4") == atoi("+f4")
			&& ft_atoi("-00000") == atoi("-00000")
		));
}

int	test_strchr(void)
{
	return ((
			strcmp(ft_strchr("salut", 'a'), strchr("salut", 'a'))
			&& strcmp(ft_strchr("salut", 'x'), strchr("salut", 'x'))
			&& strcmp(ft_strchr("salut", 200), strchr("salut", 200))
			&& strcmp(ft_strchr("\0f", 'f'), strchr("\0", 'f'))
			&& strcmp(ft_strchr("\0hello", '\0'), strchr("\0hello", '\0'))
			&& strcmp(ft_strchr("retour\tsalut\n", '\t'), strchr("retour\tsalut\n", '\t'))
		));
}
