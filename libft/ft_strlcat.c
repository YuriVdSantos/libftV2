/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurivieiradossantos <yurivieiradossanto    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:51:02 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 14:07:15 by yurivieirad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len;
    size_t src_len;
    size_t to_copy;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dst_len >= dstsize)
        return dstsize + src_len;

    to_copy = dstsize - dst_len - 1;

    if (to_copy > src_len)
        to_copy = src_len;

    ft_strlcpy(dst + dst_len, src, to_copy + 1);

    return dst_len + src_len;
}
