/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:31:12 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/23 14:07:16 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string concatenation
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
** 		The strlcat() function appends the NUL-terminated string src to the end
**	of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi
**	nating the result.
*/

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[i];
		c++;
		i++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int main(void)
{
	src
	printf("%lu\n", ft_strlcat("felipa", "camaleon", 4));
    printf("%lu\n", strlcat("felipa", "camaleon", 4));
	return(0);
	
}
*/