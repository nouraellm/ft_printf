/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 01:32:18 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 21:14:56 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int	ft_putchar(char c)
{
	int count;

	count = 0;
	write(1, &c, 1);
	count++;
	return (count);
}
