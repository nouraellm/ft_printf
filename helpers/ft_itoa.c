/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 06:10:48 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 20:38:27 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

static int		ft_intlen(int n)
{
	int len;

	len = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int				sign;
	int				length;
	unsigned int	nb;
	char			*alpha;

	nb = (n > 0 ? n : -n);
	sign = (n >= 0 ? 1 : 0);
	length = ft_intlen(n);
	if (!(alpha = malloc(length + 1)))
		return (NULL);
	alpha[length--] = '\0';
	while (nb)
	{
		alpha[length--] = nb % 10 + '0';
		nb = nb / 10;
	}
	alpha[length] = nb % 10 + '0';
	if (sign == 0)
		alpha[0] = '-';
	return (alpha);
}
