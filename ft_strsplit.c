/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:51:25 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:25:02 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len_a(char const *s, char c)
{
	int n;
	int x;

	n = 1;
	x = 0;
	while (s[x])
	{
		if (s[x++] == c)
		{
			while (s[x] == c)
				x++;
			if (s[x])
			{
				while (s[x] != c && s[x])
					x++;
				n++;
			}
		}
		else
			x++;
	}
	return (n);
}

int		len_b(char const *s, char c)
{
	int n;
	int x;

	n = 1;
	x = 0;
	while (s[x] == c)
		x++;
	while (s[x] != c && s[x])
	{
		x++;
		n++;
	}
	return (n);
}

int		ft_workhorse(char *src, char **dst, char c, int x)
{
	int	a;
	int b;

	a = 0;
	while (s[x])
	{
		if (s[x++] == c)
		{
			while (s[x] == c)
				x++;
			if (s[x])
			{
				b = 0;
				res[a] = (char*)malloc(len_b(s, c));
				while (s[x] != c && s[x])
					res[a][b++] = s[x++];
				res[a][b] = '\0';
				a++;
			}
		}
		else
			x++;
	}
	return (a);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		x;
	int		a;
	int		b;

	x = 0;
	a = 0;
	*res = (char*)malloc(len_a(s, c));
	a = ft_workhorse(s, res, c, x);
	res[a] = (char*)malloc(1);
	res[a] = NULL;
	return (res);
}
