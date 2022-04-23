/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:50:41 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/23 11:37:11 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (0);
}

/*
int	main()

{
	
	printf("se encuentra el valor?: %s\n", strrchr("susana", '\0'));
	printf("se encuentra el valor?: %s\n", ft_strrchr("susana", '\0'));
	return (0);
}
*/
