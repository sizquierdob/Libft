/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:03:50 by sizquier          #+#    #+#             */
/*   Updated: 2022/03/30 17:05:37 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include<stdlib.h>

int	ft_isalpha(int alpha)
{
	if((alpha >='a' && alpha <='z')||(alpha >='A' && alpha <='Z'))
	{
		return (1);
	}
	else	return (0);
}
/*int	main(void)
{
	int		count;
	count = 'A';
	printf("el resultado es letra 1 o sino es 0 %d", ft_isalpha(count));
	
}
/*
