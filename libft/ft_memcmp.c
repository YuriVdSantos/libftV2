/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurivieiradossantos <yurivieiradossanto    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:02 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 12:09:45 by yurivieirad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    size_t i;
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;

    for (i = 0; i < n; i++) {
        if (ptr1[i] != ptr2[i]) {
            return ptr1[i] - ptr2[i];
        }
    }
    return 0;
}

