/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:22:45 by sizquier          #+#    #+#             */
/*   Updated: 2022/05/04 19:22:48 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*final_lst;
	t_list	*aux;

	if (!lst && !*del && !*f)
		return (NULL);
	final_lst = NULL;
	while (lst)
	{
		aux = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&final_lst, aux);
		lst = lst->next;
	}
	return (final_lst);
}
