/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:08:39 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 08:16:46 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int	ft_putsp(char *str, int precision)
{
	int count;

	count = 0;
	while (str[count] && count < precision)
	{
		ft_putchar(str[count]);
		count++;
	}
	return (count);
}
