/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:46:25 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/11 11:39:03 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

char	*read_buffer(int fd, char *buffer)
{
	int		num_read;
	char	*new;

	num_read = 1;
	while (num_read > 0 && !ft_strchrg(buffer, '\n'))
	{
		new = ft_callocg(BUFFER_SIZE + 1, sizeof(char));
		num_read = read(fd, new, BUFFER_SIZE);
		if (num_read < 0)
		{
			if (buffer)
				free(buffer);
			free(new);
			return (NULL);
		}
		buffer = ft_strjoing(buffer, new);
		free(new);
	}
	return (buffer);
}

char	*new_line(char *buffer)
{
	char	*line;
	int		count;

	count = 0;
	while (buffer[count] && buffer[count] != '\n')
		count++;
	if (buffer[count] == '\n')
		count++;
	line = ft_substrg(buffer, 0, count);
	return (line);
}

char	*to_be_continued(char *buffer, char *line)
{
	char	*new;
	int		start;

	start = 0;
	if (!buffer || !line)
		return (NULL);
	while (buffer[start] == line[start] && buffer[start])
		start++;
	new = ft_substrg(buffer, start, ft_strleng(buffer) - start);
	free(buffer);
	return (new);
}

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	buffer = NULL;
	buffer = read_buffer(fd, buffer);
	if (!buffer || buffer[0] == '\0')
	{
		if (buffer)
			free(buffer);
		return (buffer = NULL, NULL);
	}
	line = new_line(buffer);
	buffer = to_be_continued(buffer, line);
	free(buffer);
	return (line);
}
