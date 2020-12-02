/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:24:13 by jescully          #+#    #+#             */
/*   Updated: 2020/11/27 12:42:02 by jean             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	const char		*csrc;
	int				cn;
	
	if (!dest && !src)
		return (NULL);

	cn = (int)n;
	cdest = dest;
	csrc = src;
	if ((const char *)cdest < csrc)
		ft_memcpy(dest, src, n);
	else
		while (cn-- > 0)
			cdest[cn] = csrc[cn];
	return (dest);
}
