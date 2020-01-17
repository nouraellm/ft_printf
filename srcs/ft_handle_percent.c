/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:43:01 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 08:26:47 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_handle_percent(t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_putsp("%", 1);
	count += ft_handle_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		count += ft_putsp("%", 1);
	return (count);
}
