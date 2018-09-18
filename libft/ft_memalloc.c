/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:05:25 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/21 13:19:14 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memory;

	if (!(memory = (void*)malloc(sizeof(*memory) * (size))) || !size)
		return (NULL);
	memory = ft_memset(memory, 0, size);
	return (memory);
}
