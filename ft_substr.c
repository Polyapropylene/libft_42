/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:22:39 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/21 03:31:09 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// creates substring from string s

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*substr;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	substr = (char *)malloc((len + 1) * sizeof(*s));
	if (!substr)
		return (NULL);
	while (i < start)
		i++;
	while (k < len)
	{
		substr[k] = s[i];
		i++;
		k++;
	}
	substr[k] = '\0';
	return (substr);
}
