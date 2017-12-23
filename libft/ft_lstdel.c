/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:17:50 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 16:48:58 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next_nod;

	while (*alst)
	{
		next_nod = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = next_nod;
	}
	*alst = NULL;
}
