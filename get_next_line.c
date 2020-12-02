/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean <jescully@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 16:36:29 by jean              #+#    #+#             */
/*   Updated: 2020/12/02 12:18:35 by jean             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include "get_next_line.h"
char	*cleaned_up_line(char *line)
{
	int i;
	char *clean_line;

	i = 0;	
	if (!line)
		 return (NULL);
	while (line[i] != '\n')
		i++;
	if (!(clean_line = (char*)(malloc(sizeof(char) * (i + 1)))))
		return (NULL);
	ft_strlcpy(clean_line, line, i);
	return (clean_line);
}

static char	*leftovers(char *available_string)
{
	static char *new_string;

	new_string = ft_strdup(ft_strchr(available_string, '\n')); //+1
	free(available_string);
	return (new_string);
}


int	get_next_line(int const fd, char **line)
{
	static char *available_string;
	char bufstr[BUFFER_SIZE + 1];
	int bytes;

	while (!ft_strchr(available_string, '\n'))
	{
		bytes = read(fd, bufstr, BUFFER_SIZE);
		if (!bytes)
			return (-1);
		//here is where we protect bytes if there is an error, we just return -1
		bufstr[bytes] = '\0';
		available_string = ft_strjoin(available_string, bufstr);
	}
	//free(bufstr);
	*line = cleaned_up_line(available_string);
	available_string = leftovers(available_string);
	if (!available_string)
		return 0;
	return (1);
}	
