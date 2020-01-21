/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:04:27 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/20 00:38:56 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_isconversion(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
	|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int	ft_isflag(int c)
{
	return ((c == '.') || (c == '*') || (c == '0') || (c == '-') || (c == ' '));
}

int	ft_handle(int c, t_flags flags, va_list args)
{
	int count;

	count = 0;
	if (c == 'c')
		count = ft_handle_char(va_arg(args, int), flags);
	else if (c == '%')
		count += ft_handle_percent(flags);
	else if (c == 'p')
		count = ft_handle_pointer(va_arg(args, unsigned long long), flags);
	else if (c == 's')
		count = ft_handle_string(va_arg(args, char *), flags);
	else if ((c == 'i') || (c == 'd'))
		count = ft_handle_int(va_arg(args, int), flags);
	else if (c == 'x')
		count += ft_handle_hex(va_arg(args, unsigned int), 1, flags);
	else if (c == 'X')
		count += ft_handle_hex(va_arg(args, unsigned int), 0, flags);
	else if (c == 'u')
		count += ft_handle_uint((unsigned int)va_arg(args, unsigned int)
		, flags);
	return (count);
}
