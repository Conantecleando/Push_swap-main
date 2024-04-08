/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:07:52 by daroldan          #+#    #+#             */
/*   Updated: 2023/05/13 21:47:41 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *orig, size_t len)
{
	size_t	i;

	i = -1;
	if (len != 0)
	{
		while (++i < len -1 && orig[i] != '\0')
			dest[i] = orig[i];
		dest[i] = '\0';
	}
	return (ft_strlen(orig));
}
