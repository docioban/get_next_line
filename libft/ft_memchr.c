/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:02:57 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 16:49:53 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)s;
	i = 0;
	while (i++ < n)
		if (*str++ == (unsigned char)c)
			return (--str);
	return (0);
}
