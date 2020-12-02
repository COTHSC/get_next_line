/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:46:51 by jescully          #+#    #+#             */
/*   Updated: 2020/11/27 12:49:11 by jean             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char		*csrc;
	int				cn;

	cn = (int)n;
	cdest = dest;
	csrc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (cdest[i] == (unsigned char)c)
			return (&cdest[++i]);
		i++;
	}
	return (NULL);
}
