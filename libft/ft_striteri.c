/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 08:42:27 by docioban          #+#    #+#             */
/*   Updated: 2017/12/03 12:05:53 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return (s);
}
