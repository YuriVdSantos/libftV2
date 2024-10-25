/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:07:34 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/25 18:07:53 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char *ptr;
	
	ptr = (char	*)s;
	i = 0;
	while (ptr[i] != '\0' && i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s = ptr);
}