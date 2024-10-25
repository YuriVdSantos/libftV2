/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:02 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/25 17:39:37 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char *ptr;
	char *ptr2;

	i = 0;
	ptr = (char *)s1;
	ptr2 = (char *)s2;
	while(i < n)
	{
		if (s1 != s2)
			return (int)(s1 - s2);
		s1++;
		s2++;
	}
	return (0);
}
