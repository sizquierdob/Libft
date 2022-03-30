/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:23:38 by sizquier          #+#    #+#             */
/*   Updated: 2022/03/30 17:54:23 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 60 && c <= 71)
	{
		return (1);
	}
	else	return (0);
}

/*int	main(void)
{
	int	number;

	number = 6;
	printf("el numero es digito resultado 1, sino 0 %d\n", ft_isdigit (number));
}
/*