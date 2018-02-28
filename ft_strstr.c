/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:58:11 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 17:51:58 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int x;
	int y;

	x = 0;
	if (!needle[x])
		return (haystack);
	while (haystack[x])
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
