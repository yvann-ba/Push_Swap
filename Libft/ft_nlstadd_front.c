/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:30:52 by ybarbot           #+#    #+#             */
/*   Updated: 2024/01/24 09:44:19 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nlstadd_front(t_nlist **lst, t_nlist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
