/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:55:28 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/21 17:02:58 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && ((unsigned char)c) != *s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/*
int	main()
{
	
	printf("se encuentra el valor?: %s|\n", strchr("tripouille", 't' + 256));
	printf("se encuentra el valor?: %s|\n", ft_strchr("tripouille", 't' + 256));
	return (0);
}
*/