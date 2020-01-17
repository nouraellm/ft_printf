/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 04:10:47 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 20:18:30 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_input(char *pointer, t_flags flags)
{
	int count;

	count = 0;
	count += ft_putsp("0x", 2);
	if (flags.dot >= 0)
	{
		count += ft_handle_width(flags.dot, ft_strlen(pointer), 1);
		count += ft_putsp(pointer, flags.dot);
	}
	else
		count += ft_putsp(pointer, ft_strlen(pointer));
	return (count);
}

int			ft_handle_pointer(unsigned long long num, t_flags flags)
{
	int		count;
	char	*p;

	count = 0;
	if (flags.dot == 0 && num == 0)
	{
		count += ft_putsp("2x", 2);
		return (count += ft_handle_width(flags.width, 0, 1));
	}
	p = ft_utl_base(num, 16);
	p = ft_str_tolower(p);
	if ((size_t)flags.dot < ft_strlen(p))
		flags.dot = ft_strlen(p);
	if (flags.minus == 1)
		count += ft_input(p, flags);
	count += ft_handle_width(flags.width, ft_strlen(p) + 2, 0);
	if (flags.minus == 0)
		count += ft_input(p, flags);
	free(p);
	return (count);
}
