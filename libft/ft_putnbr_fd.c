/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:15:51 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:13:02 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	v[10];
	long	nb;
	int		x;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	x = 0;
	while (nb > 0)
	{
		v[x] = nb % 10 + '0';
		nb = nb / 10;
		x++;
	}
	x--;
	while (x >= 0)
	{
		ft_putchar_fd(v[x], fd);
		x--;
	}
}
