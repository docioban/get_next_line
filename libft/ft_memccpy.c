/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:28:28 by docioban          #+#    #+#             */
/*   Updated: 2017/12/19 08:51:59 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		ch;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	ch = (unsigned char)c;
	while (i < n)
	{
		*d = *s;
		if (*s == ch)
			return (d + 1);
		d++;
		s++;
		i++;
	}
	return (NULL);
}
