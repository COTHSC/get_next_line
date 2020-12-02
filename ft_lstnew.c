/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:57:28 by jescully          #+#    #+#             */
/*   Updated: 2020/11/24 18:53:40 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *t;

	if (!(t = ((t_list*)malloc(sizeof(t_list)))))
		return (NULL);
	t->content = content;
	t->next = NULL;
	return (t);
}
