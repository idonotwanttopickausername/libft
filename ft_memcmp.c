/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:58:09 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:04:04 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*p1;
	unsigned char	*p2;

	x = 0;
	p1 = s1;
	p2 = s2;
	while (x < n)
	{
		if (p1[x++] != p2[x++])
			return (0);
	}
	return ((int)(s1[x] - s2[x]));
}
