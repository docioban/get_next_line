/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:06:48 by docioban          #+#    #+#             */
/*   Updated: 2017/12/23 11:54:44 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int				endl(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		str[i] = '\0';
	else
		return (-1);
	return (i);
}

static t_list	*get_lst(t_list **cap, int fd)
{
	t_list	*lst;

	lst = *cap;
	while (lst)
	{
		if ((int)lst->content_size == fd)
			return (lst);
		lst = lst->next;
	}
	lst = ft_lstnew("\0", fd);
	ft_lstadd(cap, lst);
	lst = *cap;
	return (lst);
}

int				ver(t_list *lst, char *aux, char **line, int r)
{
	int	e;

	aux[r] = '\0';
	lst->content = ft_strjoin(lst->content, aux);
	aux = ft_strnew(BUFF_SIZE + 1);
	e = endl(lst->content);
	if (e > -1)
	{
		*line = ft_strdup(lst->content);
		lst->content = lst->content + e + 1;
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static t_list	*cap;
	t_list			*lst;
	char			*aux;
	int				r;

	aux = ft_strnew(BUFF_SIZE + 1);
	if (fd < 0 || line == NULL || BUFF_SIZE <= 0 || read(fd, aux, 0) < 0)
		return (-1);
	lst = get_lst(&cap, fd);
	while ((r = read(fd, aux, BUFF_SIZE)))
		if (ver(lst, aux, line, r))
			return (1);
	if (!ft_strlen(lst->content))
		return (0);
	if (ver(lst, aux, line, r))
		return (1);
	if (ft_strlen(lst->content) - 1 > 0)
	{
		*line = ft_strdup(lst->content);
		lst->content = lst->content + ft_strlen(lst->content);
		return (1);
	}
	return (0);
}
