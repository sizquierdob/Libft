/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:25:43 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/19 21:17:06 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	ft_bzero(void *s, size_t n)

{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int main()

{
	char	data[] ="prueba bzero";
	
	printf("%s\n", data);
	//printf("tras aplicar ft_bezero%s\n", ft_bzero(&data, 3);
	return(0);
}
*/