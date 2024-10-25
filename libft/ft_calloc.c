/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:16:26 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/25 17:34:36 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void *ptr;

	ptr = (void*)malloc(count * size);
	if(!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}