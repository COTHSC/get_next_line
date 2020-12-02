/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:05:59 by jescully          #+#    #+#             */
/*   Updated: 2020/11/30 08:42:51 by jean             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cs;

	if (!s)
		return (NULL);

	cs = (char *)s;
	i = 0;
	while (s[i])
	{
		if (cs[i] == c)
			return (&cs[i]);
		i++;
	}
	if (cs[i] == c)
		return (&cs[i]);
	return (NULL);
}
