/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:19:24 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/19 17:56:06 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_isalnum(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)

{
	int	c;
	printf("introduce un numeron\n");
	scanf("%d", &c);
	printf("el caracter introducido es:%c, si es alfanumerico %d\n",c, ft_isalnum(c));
	return (0);
}
*/