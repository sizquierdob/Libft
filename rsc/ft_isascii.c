/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:59:12 by sizquier          #+#    #+#             */
/*   Updated: 2022/03/30 20:45:33 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_isascii(int c)

{
	if(c >= 0 && c <= 127)
	{
		return (1);
	}
	else	return(0);
}

/*int	main()
{
	int c;
	printf("introduce un numero n:");
	scanf("%d", &c);
	printf("el caracter introducido es :%c,  si es unsigned %d\n",c, ft_isascii(c));
	return (0);
}
/*