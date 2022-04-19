/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:53:54 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/19 17:59:38 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	int	c;

	printf("introduce un caracter");
	scanf("%d", &c);
	printf ("el caracter introducido es %c, y si es imprimible su valor es %c\n", c, ft_isprint(c));
	return (0);

}
*/