/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:23:26 by jescully          #+#    #+#             */
/*   Updated: 2020/11/25 09:55:10 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		c;
	int		d;
	char	*str;
	char	*t;

	t = "\0";
	i = 0;
	c = 0;
	d = ft_strlen(s1);
	while (ft_ischarset(s1[i], set))
		i++;
	while (ft_ischarset(s1[d - 1], set))
		d--;
	d = d - i;
	if (d < 0)
		d = 0;
	str = (char *)malloc(sizeof(char) * (d + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	while (c < d)
		str[c++] = s1[i++];
	str[c] = '\0';
	return (str);
}
