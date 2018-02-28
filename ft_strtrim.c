/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:11:42 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:07:18 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		l;

	l = ft_strlen(s);
	res = (char*)malloc(sizeof(char) * l);
	if (!res)
		retrun (NULL);
	while (s[x])
	{
		if (x = 0 || x = l)
			if(s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
				x++;
		if (!s[x])
			break ;
		res[y] = s[x];
		y++;
		x++;
	}
	return (res);
}
