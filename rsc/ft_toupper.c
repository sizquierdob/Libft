/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:05:06 by sizquier          #+#    #+#             */
/*   Updated: 2022/03/31 19:38:27 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/*int	main(void)
{
	int c = 'a';
	printf("la conversión a minusculas es:%c\n", toupper(c)); // poner librería <ctype.h>
	printf("la conversión a minusculas es:%c\n", ft_toupper(c));
	return (0);
}
*/