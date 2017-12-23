/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:51:40 by docioban          #+#    #+#             */
/*   Updated: 2017/12/08 07:32:40 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *dest_next;
	t_list *dest_cap;

	if (lst == NULL)
		return (NULL);
	dest_cap = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (dest_cap == NULL)
		return (NULL);
	dest_next = dest_cap;
	lst = lst->next;
	while (lst != NULL)
	{
		dest_next->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
		if (dest_next == NULL)
			return (NULL);
		lst = lst->next;
		dest_next = dest_next->next;
	}
	return (dest_cap);
}
