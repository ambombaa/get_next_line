/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:26:12 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/11 13:30:24 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nouveau;

	if (!(nouveau = (char*)malloc(sizeof(*nouveau) * (size + 1))))
		return (NULL);
	nouveau = (char*)ft_memset(nouveau, 0, size + 1);
	return (nouveau);
}
