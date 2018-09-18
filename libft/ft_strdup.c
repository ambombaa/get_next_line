/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:17:58 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/22 10:31:29 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*destination;

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	a++;
	destination = (char *)malloc(sizeof(char) * a);
	if (destination == NULL)
		return (NULL);
	a = 0;
	while (s1[a] != '\0')
	{
		destination[a] = s1[a];
		a++;
	}
	destination[a] = '\0';
	return (destination);
}
