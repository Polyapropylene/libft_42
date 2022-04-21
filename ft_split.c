/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:43:34 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/21 03:15:01 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// takes string and splits it to array of string using 'c' as a delimiter

static int	count_w(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i] && (s[i]!= c))
		i++;
	if (i > 0)
		w++;
	while (s[i - 1])
	{
		if (s[i] == c)
		{
			w++;
			while (s[i] == c)
				i++;
			if (!s[i])
				w--;
		}
		i++;
	}
	return (w);
}

static int	count_l(char const *s, int i, char c)
{
	unsigned int	l;

	l = 0;
	while (s[i] != c)
	{
		i++;
		l++;
	}
	return (l);
}

static char	**free_all(char **new_s, unsigned int l)
{
	while (l > 0)
	{
		free(new_s[l - 1]);
		l--;
	}
	free(new_s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new_s;
	unsigned int		i;
	int		l;

	if (s == NULL)
		return (NULL);
	i = 0;
	l = 0;
	new_s = (char **)malloc(sizeof(char *) * (count_w(s, c) + 1));
	if (!new_s)
		return (NULL);
	while (s[i] && l < count_w(s, c))
	{
		while (s[i] == c)
			i++;
		new_s[l] = (char *)malloc(sizeof(char) * (count_l(s, i, c) + 1));
		if (!new_s[l])
			return (free_all(new_s, count_l(s, i, c)));
		new_s[l] = ft_substr(s, i, (count_l(s, i, c)));
		i = i + count_l(s, i, c); 
		l++;
	}
	new_s[l] = NULL;
	return (new_s);
}
