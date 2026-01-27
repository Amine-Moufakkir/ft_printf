/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:43:41 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/27 01:12:58 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*update_storage(char *stash)
{
	char	*rem;
	char	*nl;
	size_t	len;

	nl = ft_strchr(stash, '\n');
	if (!nl || !*(nl + 1))
	{
		free(stash);
		return (NULL);
	}
	len = ft_strlen(nl + 1);
	rem = malloc(len + 1);
	if (!rem)
	{
		free(stash);
		return (NULL);
	}
	ft_memcpy(rem, nl + 1, len);
	rem[len] = '\0';
	free(stash);
	return (rem);
}

static char	*get_current_line(char *stash)
{
	char	*line;
	int		len;
	int		i;

	if (!stash || !*stash)
		return (NULL);
	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	line = malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	i = -1;
	while (++i < len)
		line[i] = stash[i];
	line[i] = '\0';
	return (line);
}

static char	*fill_stash(int fd, char *stash)
{
	char	*buff;
	char	*tmp;
	ssize_t	count;

	buff = malloc((size_t)BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	count = 1;
	while (!ft_strchr(stash, '\n') && count > 0)
	{
		count = read(fd, buff, BUFFER_SIZE);
		if (count == -1)
		{
			free(buff);
			free(stash);
			return (NULL);
		}
		buff[count] = '\0';
		tmp = stash;
		stash = ft_strjoin(tmp, buff);
		free(tmp);
	}
	free(buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = fill_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = get_current_line(stash);
	if (!line)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	stash = update_storage(stash);
	return (line);
}
