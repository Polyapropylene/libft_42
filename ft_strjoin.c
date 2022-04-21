/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:22:49 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/21 03:15:47 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatenates two strings

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	char	*s3;

	i = 0;
	n = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		s3[i] = s2[n];
		i++;
		n++;
	}
	s3[i] = '\0';
	return (s3);
}
