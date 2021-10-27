/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:22:39 by rrhyhorn          #+#    #+#             */
/*   Updated: 2021/10/22 18:39:32 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
