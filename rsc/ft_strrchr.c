/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:50:41 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/03 15:25:21 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	* strchr(const	char *s, int c);

{
	int	i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

int	main()

{
	
	printf("se encuentra el valor?: %d\n", strrchr("susana", 65));
	printf("se encuentra el valor?: %d\n", ft_strrchr("susana", 65));
	return (0);
}
// pasos, debemos ir al final de la cadena, para ello podemos usar la función strlen