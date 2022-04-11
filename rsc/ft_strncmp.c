/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:39:00 by sizquier          #+#    #+#             */
/*   Updated: 2022/04/11 21:51:47 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)


{
	int	i;
	
	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char str1[]="asasfasdfasdf";
	char str2[]="asasfasd";

	printf("%d\n", strncmp(str1, str2, 3));
	printf("%d\n", ft_strncmp(str1, str2,3));
return (0);
}