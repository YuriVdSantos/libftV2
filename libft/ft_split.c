/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:37:26 by yvieira-          #+#    #+#             */
/*   Updated: 2024/10/28 20:02:55 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// typedef struct {
// 	size_t start;
// 	size_t length;
// } t_split_next;

static char	**ft_alloc_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	size_t	total;

	i = 0;
	total = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			total++;
		i++;
	}
	split = (char **)malloc(sizeof(char *) * (total + 1));
	if (!split)
		return (NULL);
	return (split);
}

void	*ft_free_all_split_alloc(char **split, size_t elts)
{
	size_t	i;

	i = 0;
	while (i < elts)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static void	*ft_split_range(char **split, char const *s,
		t_split_next *st, t_split_next *lt)
{
	split[lt->length] = ft_substr(s, st->start, st->length);
	if (!split[lt->length])
		return (ft_free_all_split_alloc(split, lt->length));
	lt->length++;
	return (split);
}

static void	*process_segment(char **split, char const *s,
	t_split_next *lt, size_t i)
{
	t_split_next st = {lt->start, i - lt->start};
    
	if (i > lt->start && !ft_split_range(split, s, &st, lt))
		return (NULL);
	lt->start = i + 1;
	return (split);
}

static void	*ft_split_by_char(char **split, char const *s, char c)
{
	size_t i = 0;
	t_split_next lt = {0, 0};

	while (s[i])
	{
		if (s[i] == c && !process_segment(split, s, &lt, i))
			return (NULL);
		i++;
	}
	if (!process_segment(split, s, &lt, i))
		return (NULL);
	split[lt.length] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = ft_alloc_split(s, c);
	if (!split)
		return (NULL);
	if (!ft_split_by_char(split, s, c))
	{
		ft_free_all_split_alloc(split, 0);
		return (NULL);
	}
	return (split);
}
