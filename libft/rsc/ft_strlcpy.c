/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:04:12 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/27 09:54:29 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string copying
**
** DESCRIPTION:
** 		The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
** 		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize > ft_strlen(src))
	{
		ft_bzero(dst, ft_strlen(src));
		ft_memmove(dst, src, ft_strlen(src));
		dst[ft_strlen(src)] = '\0';
	}
	else
	{
		ft_bzero(dst, dstsize);
		ft_memmove(dst, src, dstsize);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main(void)
{
	char	dst[15] = "aaaaaaaaaaaaaaa";
	char	dst2[15] = "aaaaaaaaaaaaaaa";
	char	src[] = "lorem ipsum dolor sit amet";
	size_t		result;
	result = 0;
	result = strlcpy(dst2, src, 0);
	printf("Original function: %zu	%s\n", result, dst2);
	write(1, dst2, 15);
	write(1, "\n", 1);
	result = ft_strlcpy(dst, src, 0);
	printf("My function: %zu	%s\n", result, dst);
	write(1, dst, 15);
	write(1, "\n", 1);
	return (0);
}
*/
