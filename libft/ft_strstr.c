/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:16:35 by docioban          #+#    #+#             */
/*   Updated: 2017/12/19 08:34:27 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *biq, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)biq);
	while (biq[i] != '\0')
	{
		j = 0;
		while (biq[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)biq + i - j);
		}
		i = i - j + 1;
	}
	return (NULL);
}
