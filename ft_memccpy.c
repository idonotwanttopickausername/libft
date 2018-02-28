/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:52:03 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 17:55:34 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*d;
	size_t	x;

	d = dst;
	x = 0;
	while (n > x)
	{
		if ((char)src[x] == (char)c)
			return (&dst[x + 1]);
		d[x++] = (char)src[x++];
	}
	return (NULL);
}
