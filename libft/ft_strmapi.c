#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		x;

	if (!s || !f)
		return (NULL);
	ret = ft_strnew(ft_strlen(s));
	if (!ret)
		return (NULL);
	x = -1;
	while (s[++x])
		ret[x] = f(s[x]);
	return (ret);
}