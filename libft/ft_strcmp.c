/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:17:03 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:23:04 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while (*(unsigned char*)(s1 + c) || *(unsigned char*)(s2 + c))
	{
		if (*(unsigned char*)(s1 + c) != *(unsigned char*)(s2 + c))
			return (*(unsigned char*)(s1 + c) - *(unsigned char*)(s2 + c));
		c++;
	}
	return (0);
}
