/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:41:16 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:00:15 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t y;

	x = 0;
	if (!needle[x])
		return (haystack);
	while (haystack[x] && x < len)
	{
		y = 0;
		while (haystack[x + y] == needle[y])
			y++;
		x++;
		if (!needle[y])
			return (haystack[x - y]);
	}
	return (NULL);
}
