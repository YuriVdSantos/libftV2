/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:06:05 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/25 17:39:31 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return &ptr[i];
		i++;
	}
	return NULL;
}