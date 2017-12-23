/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:05:44 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 17:07:58 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sr1;
	unsigned char	*sr2;
	size_t			i;

	sr1 = (unsigned char *)s1;
	sr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sr1[i] != sr2[i])
			return ((int)(sr1[i] - sr2[i]));
		i++;
	}
	return (0);
}
