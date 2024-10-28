/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurivieiradossantos <yurivieiradossanto    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:16:26 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 13:55:14 by yurivieirad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>  // For malloc and free

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (count == 0 || size == 0)
        return malloc(0);

    ptr = malloc(count * size);
    if (!ptr)
        return NULL;

    ft_bzero(ptr, count * size);
    return ptr;
}
