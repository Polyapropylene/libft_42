/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:22:27 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/20 17:39:20 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes string with newline to file descriptor 

void	ft_putendl_fd(char *s, int fd)
{
	char	*n;

	n = "\n";
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, n, 1);
}
