#include "libft.h"

size_t ft_strlen(const char *str);

char *ft_strtrim(const char *s1, const char *set)
{
    size_t i;
    size_t j;
    char *str;

    if (!s1 || !set)
        return NULL;

    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    
    j = ft_strlen(s1);
    while (j > i && ft_strchr(set, s1[j - 1]))
        j--;

    str = (char *)malloc(sizeof(char) * (j - i + 1));
    if (!str)
        return NULL;

    ft_strlcpy(str, &s1[i], j - i + 1);
    return str;
}
