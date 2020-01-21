/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:57:01 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/20 00:38:40 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_input(char *str, t_flags flags)
{
	int count;

	count = 0;
	if (flags.dot >= 0)
	{
		count += ft_handle_width(flags.dot, ft_strlen(str), 0);
		count += ft_putsp(str, flags.dot);
	}
	else
		count += ft_putsp(str, ft_strlen(str));
	return (count);
}

int			ft_handle_string(char *str, t_flags flags)
{
	int count;

	count = 0;
	if (!str)
		str = "(null)";
	if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.minus == 1)
		count += ft_input(str, flags);
	if (flags.dot >= 0)
		count += ft_handle_width(flags.width, flags.dot, 0);
	else
		count += ft_handle_width(flags.width, ft_strlen(str), 0);
	if (flags.minus == 0)
		count += ft_input(str, flags);
	return (count);
}
