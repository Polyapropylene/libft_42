/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:23:11 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/21 03:16:02 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies 'src' string to the end of 'dst' string

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[n])
	{
		if (i < dstsize - 1)
			dst[i] = src[n];
		if (i == dstsize - 1)
			dst[i] = '\0';
		i++;
		n++;
	}
	if (i <= dstsize)
		dst[i] = '\0';
	return (i);
}
