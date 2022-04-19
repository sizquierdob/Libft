/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:30:05 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/19 21:34:40 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;

	if (!dst && !src)
		return (NULL);

	temp_src = (unsigned char *)src;
	temp_dst = (unsigned char *)dst;

	if (dst < src)
		return (ft_memcpy(temp_dst, temp_src, len));
	while (len--)
		temp_dst[len] = temp_src[len];
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[10] = "";
	char	dst2[10] = "";
	char	src[] = "lorem ipsum dolor sit amet";
	printf("Original function: %s\n", memmove(dst2, src, 10));
	printf("My function: %s\n", ft_memmove(dst, src, 10));
	return (0);
}
*/
