/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurivieiradossantos <yurivieiradossanto    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:25:10 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 12:15:06 by yurivieirad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t n) {
    size_t i;
    size_t j;

    if (to_find[0] == '\0') {
        return (char *)str;
    }
    
    for (i = 0; str[i] != '\0' && i < n; i++) {
        for (j = 0; to_find[j] != '\0' && str[i + j] != '\0' && i + j < n; j++) {
            if (str[i + j] != to_find[j]) {
                break;
            }
        }
        if (to_find[j] == '\0') {
            return (char *)&str[i];
        }
    }
    return NULL;
}

