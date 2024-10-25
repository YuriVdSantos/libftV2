/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:51:56 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/25 17:40:15 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((*str1 || *str2) && i < n)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		else
		{
			str2++;
			str1++;
			i++;
		}
	}
	return (0);
}
