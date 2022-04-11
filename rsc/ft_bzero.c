/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:25:43 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/05 20:03:57 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_bzero(void *s, size_t	n)

{
	size_t	i;

	while (*s != '\0' && i < n)
		s++;
	if (*s == '0')
	{	
		return ((char *)s);
	}
	return (0);
}
}
int main()

{
	char	data[] ="prueba bzero";
	
	printf("%s\n", data);
	//printf("tras aplicar ft_bezero%s\n", ft_bzero(&data, 3);
	return(0);
}