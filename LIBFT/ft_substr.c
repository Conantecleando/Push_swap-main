/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:53:22 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/08 21:20:58 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*z;

	p = (char *)s;
	if (ft_strlen(p) < (len + start))
		len = (ft_strlen(p) - start);
	if (!len || !s || start >= ft_strlen(p))
		return (ft_calloc(1, 1));
	z = (char *) malloc (len + 1);
	if (!z)
		return (0);
	if (len > 0)
	{
		ft_strlcpy(z, (p + start), len + 1);
		return (z);
	}
	return (0);
}
