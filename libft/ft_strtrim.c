/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:50:03 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 16:26:50 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*d;
	int		x;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	x = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[x] == ' ' || s[x] == ',' || s[x] == '\n' || s[x] == '\t')
		x--;
	if (x < i)
		x = i;
	d = (char*)malloc(sizeof(char) * (x - i) + 2);
	if (d == NULL)
		return (NULL);
	while (i <= x)
		d[j++] = s[i++];
	d[j] = '\0';
	return (d);
}
