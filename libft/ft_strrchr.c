/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:07:30 by docioban          #+#    #+#             */
/*   Updated: 2017/12/18 22:40:26 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	if (*s == '\0')
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (j != 0)
		return ((char *)&s[j]);
	if (s[0] == (char)c)
		return ((char *)&s[j]);
	else
		return (NULL);
}
