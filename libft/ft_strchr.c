/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:53:03 by docioban          #+#    #+#             */
/*   Updated: 2017/12/18 22:40:22 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *d;

	d = (char *)s;
	while (*d != '\0' && *d != (unsigned char)c)
		d++;
	if (*d == '\0' && (unsigned char)c != '\0')
		return (0);
	return ((char *)d);
}
