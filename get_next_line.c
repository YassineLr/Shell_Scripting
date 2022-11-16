/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:06:56 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/16 02:45:30 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*tmp;
	char		*line = NULL;
	char		*buff = NULL;
	static char	*saved[OPEN_MAX];

	saved[fd] = readdd(saved[fd], fd, line, buff);
	line = ft_substr(saved[fd],
		0, ft_strchr(saved[fd], '\n') - saved[fd] + 1);
	tmp = saved[fd];
	saved[fd] = ft_substr(ft_strchr(saved[fd], '\n') + 1,
		0, ft_strlen(ft_strchr(saved[fd], '\n')));
	free(tmp);
	return (line);
}
char *readdd(char *saved, int fd,char *line, char *buff)
{
	if (read(fd, NULL, 0) == -1) // to check if the fd is valid
	{
		if (fd != -1)
			free(saved); // free stuff from previous calls
		saved = NULL; // why
		return (NULL);
	}

	while (!ft_strchr(saved, '\n'))
	{
		buff = fill_buff(&fd);
		if (!buff)
		{
			if (fd == -1)
			{
				free(saved);
				saved = NULL;
				return (NULL);
			}
			line = saved;
			saved = NULL;
			return (line);
		}
		saved = ft_strjoin(saved, buff);
		free(buff);
	}
	return (saved);
}
// int main()
// {
// 	int fd;

// 	fd = open("sekiro.txt", O_RDONLY);

// 	char *s;
	
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// }