/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:21:57 by rrhyhorn          #+#    #+#             */
/*   Updated: 2021/10/25 16:18:35 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (len < ft_strlen(needle))
		return (NULL);
	while (i <= len - ft_strlen(needle))
	{
		if (ft_strncmp((char *)haystack + i, \
		(char *)needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
