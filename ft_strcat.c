/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:12:28 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:15:01 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	x;
	size_t	y;

	y = 0;
	x = ft_strlen(s1);
	while (s2[y])
		s1[x++] = s2[y++];
	s1[x] = '\0';
	return (s1);
}
