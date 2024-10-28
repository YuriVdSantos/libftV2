
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t s_len;
    char *str;

    if (!s)
        return NULL;

    s_len = ft_strlen(s);

    if (start >= s_len)
        return ft_calloc(1, sizeof(char));

    if (len > s_len - start)
        len = s_len - start;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return str; 
}