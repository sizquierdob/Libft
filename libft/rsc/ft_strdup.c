/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:24:39 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/27 17:13:17 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		size;

	size = ft_strlen(s1);
	str = (char *) ft_calloc(size + 1, 1);
	if (str == NULL)
		return (NULL);
	return ((char *)ft_memmove(str, s1, size));
}
