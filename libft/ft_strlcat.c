/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:00:33 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/25 13:05:48 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t nb)
{
	int		src_id;
	size_t	dst_len;
	size_t	src_len;
	size_t	offset;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset = dst_len;
	src_id = 0;
	if (nb == 0)
		return (src_len);
	while (src[src_id] != '\0' && offset < nb - 1)
	{
		dst[offset] = src[src_id];
		offset++;
		src_id++;
	}
	dst[dst_len + src_id] = '\0';
	if (nb < dst_len)
		return (src_len + nb);
	return (dst_len + src_len);
}
