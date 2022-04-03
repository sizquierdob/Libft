/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:48:16 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/03 14:12:16 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
int main()

{
	char	data[] ="prueba menset";
	
	printf("%s\n", data);
	printf("tras aplicar menset%s\n", ft_memset(data, 'a', 6));
	return(0);
}

/*
void *memset ( void *s, int c, size_t n);

La función memset copia el valor de c (convertido a un unsigned char) a cada uno de los primeros n caracteres en el objeto al cual señala s. 
La función memset devuelve el valor de s.
https://www.linuxteaching.com/article/how_memset_function_is_used#:~:text=En%20C%2C%20la%20funci%C3%B3n%20memset,byte%20por%20un%20valor%20particular.
 función de biblioteca void * memset (void * str, c int, size_t n) para copiar los caracteres C (un unsigned char)
n caracteres señaló la cadena str parámetro.

Negación
La siguiente es a) memset declaración de la función (.

memset void * (* str vacío, int c, size_t n)
Parámetros
str - puntos para el bloque de memoria para ser llenados.
c - el valor que se establece. Este valor se pasa como un int, pero la función se usa cuando el llenado de los bloques de memoria forman el valor unsigned char.
n - el número de bytes que se establece en ese valor.
Ejemplo: char A [100]; Memset (A, '/ 0', el sizeof (A));

*/
