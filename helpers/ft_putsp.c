/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:08:39 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/20 00:41:46 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int	ft_putsp(char *str, int precision)
{
	int i;

	i = 0;
	while (str[i] && i < precision)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
