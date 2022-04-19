/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:55:28 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/01 17:07:51 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && ((char)c) != *s)
		s++;
	if (*s == c)
	{	
		return ((char *) s);
	}
	return (0);
	
}

/*Parámetro: La función toma dos parámetros obligatorios que se describen a continuación:

char: especifica el puntero a l	a string terminada en nulo que se buscará.->*s != '\0'
c: especifica el carácter que se buscará.-> ojo que hay que indicar que no busque el 0->c != '\0'
Luego si el valor a buscar c se encuentra en el string-> devuelvemelo->if (c == *s) y me lo devuelve:return ((char *)s);

Valor de retorno: la función devuelve un puntero a la última ubicación de c en la string, 
si se encuentra el ch . Si no se encuentra, devuelve un puntero nulo.
es decir si quiero buscarla a en casa, -> le digo que me devuelva los caracteres char a partir del que son iguales

*/
int	main()
{
	
	printf("se encuentra el valor?: %s\n", strchr("susana", '0'));
	printf("se encuentra el valor?: %s\n", ft_strchr("susana", '0'));
	return (0);
}
