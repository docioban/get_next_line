/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:44:33 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 17:43:29 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *biq, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)biq);
	i = 0;
	j = 0;
	while (biq[i] != '\0' && len > i)
	{
		j = 0;
		while (biq[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0' && len >= i)
				return ((char *)biq + i - j);
		}
		i = i - j + 1;
	}
	return (NULL);
}
