/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhyhorn <rrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:13:40 by rrhyhorn          #+#    #+#             */
/*   Updated: 2022/04/21 03:14:40 by rrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes number to file descriptor

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		 n = -n;
		 ft_putchar_fd('-', fd);
	}
	 if (n > 10)
	{
		 ft_putnbr_fd(n / 10, fd);
		 ft_putnbr_fd(n % 10, fd);
	}
	 else
		 ft_putchar_fd(n + '0', fd);
}
