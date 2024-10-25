/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:30:23 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/25 18:58:41 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	size_t	i;

	i = 0;
	if (to_find == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		if (str[i] == (char)to_find)
		{
			return ((char	*)str + i);
		}		
		i++;
	}
	
	return (NULL);
}
