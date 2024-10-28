/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurivieiradossantos <yurivieiradossanto    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:08:48 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 13:23:18 by yurivieirad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    if (dstsize == 0)
        return (ft_strlen(src));

    for (i = 0; i < dstsize - 1 && src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    return (ft_strlen(src));
}
