/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:09:07 by jescully          #+#    #+#             */
/*   Updated: 2020/11/25 15:03:20 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	int cn;

	cn = (int)size;
	i = 0;
	if (cn == 0)
		return (ft_strlen(src));
	while (src[i] && i < cn - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < cn)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
