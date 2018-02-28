/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoperator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 23:06:04 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 17:49:39 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isoperator(int c)
{
	if (c == 37 || c == 42 || c == 43 || c == 45 || c == 47)
		return (1);
	return (0);
}