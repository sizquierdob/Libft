/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:00:42 by sizquier          #+#    #+#             */
/*   Updated: 2022/03/31 17:56:34 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlen(const char *str)

{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*int	main()

{
	//size_t count;
	//char cadena[] = "es una palabra";
	//scanf("%s", cadena);
	printf("la longitud de la cadena es: %zu", ft_strlen("cadena"));
	return(0);
}
*/