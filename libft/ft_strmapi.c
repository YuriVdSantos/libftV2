/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:22:11 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 19:29:06 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;

    if (!s || !f)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);  // Ensure `f` takes `(index, char)` as parameters
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;

    if (!s || !f)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
