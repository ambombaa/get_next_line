/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:22:07 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/22 11:26:34 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		validate(int fd, char **line, char **s)
{
	int		x;
	char	*tmp_store;

	x = 0;
	while (s[fd][x] != '\n' && s[fd][x] != '\0')
		x++;
	if (s[fd][x] == '\0')
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	else if (s[fd][x] == '\n')
	{
		*line = ft_strsub(s[fd], 0, x);
		tmp_store = ft_strdup(&s[fd][x + 1]);
		free(s[fd]);
		s[fd] = tmp_store;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*s[1];
	char			buf[BUFF_SIZE + 1];
	char			*string;
	int				a;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((a = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[a] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		string = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = string;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (a < 0)
		return (-1);
	else if (a == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (validate(fd, line, s));
}
