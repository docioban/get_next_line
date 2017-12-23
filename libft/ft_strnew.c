/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:01:13 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 17:31:50 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	char	*c;
	size_t	i;

	c = (char *)malloc(size + 1);
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		c[i] = '\0';
		i++;
	}
	return (c);
}
