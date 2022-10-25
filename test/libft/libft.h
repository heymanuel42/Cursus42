/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:16:53 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/24 15:12:39 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

/// @brief check if char is alphanum
/// @param c 
/// @return 
int		ft_isalpha(int c);

/// @brief check if char is digit number
/// @param c 
/// @return 
int		ft_isdigit(int c);

/// @brief check if char is alphanumeric
/// @param c 
/// @return 
int		ft_isalnum(int c);

/// @brief check if char is ascii char
/// @param c 
/// @return 
int		ft_isascii(int c);

/// @brief check if char is printable
/// @param c 
/// @return 
int		ft_isprint(int c);

/// @brief calculate length of char
/// @param c 
/// @return 
int		ft_strlen(char *c);

/// @brief fill a bte string with a byte value
/// @param b 
/// @param c 
/// @param len 
void	ft_memset(void *b, int c, size_t len);

/// @brief copy memory area
/// @param dst 
/// @param src 
/// @param n 
/// @return 
void	*ft_memcpy(void *dst, const void *src, size_t n);

/// @brief copy byte string
/// @param dst 
/// @param src 
/// @param len 
/// @return 
void	*ft_memmove(void *dst, const void *src, size_t len);

/// @brief write zeroes to a byte string
/// @param s 
/// @param n 
void	ft_bzero(void *s, size_t n);

/// @brief size bounded string copying and concatenation
/// @param dst 
/// @param src 
/// @param dstsize 
/// @return 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/// @brief size bounded string copying and concatenation
/// @param dst 
/// @param src 
/// @param dstsize 
/// @return 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/// @brief lower case to upper case letter conversion
/// @param c 
/// @return 
int		ft_toupper(int c);

/// @brief upper case to lower case letter conversion
/// @param c 
/// @return 
int		ft_tolower(int c);

/// @brief locate character in string
/// @param s 
/// @param c 
/// @return 
char	*ft_strchr(const char *s, int c);

/// @brief locate character in string
/// @param s 
/// @param c 
/// @return 
char	*ft_strrchr(const char *s, int c);

/// @brief compare strings
/// @param s1 
/// @param s2 
/// @param n 
/// @return 
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/// @brief locate byte in byte string
/// @param s 
/// @param c 
/// @param n 
/// @return 
void	*ft_memchr(const void *s, int c, size_t n);

/// @brief compare byte string
/// @param s1 
/// @param s2 
/// @param n 
/// @return 
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/// @brief locate a substring in a string
/// @param haystack 
/// @param needle 
/// @param len 
/// @return 
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/// @brief convert ASCII string to integer
/// @param str 
/// @return 
int		ft_atoi(const char *str);

/// @brief memory allocation
/// @param count 
/// @param size 
/// @return 
void	*ft_calloc(size_t count, size_t size);

/// @brief save a copy of a string
/// @param s1 
/// @return 
char	*ft_strdup(const char *s1);
#endif