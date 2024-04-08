/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:23:33 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:56:29 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t			z;
	unsigned char	*p;

	p = (unsigned char *)s;
	z = -1;
	while (++z < len && z >= 0)
	{
		if (p[z] == (unsigned char)c)
			return ((void *)(p + z));
	}
	return (0);
}
