/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:12:43 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 21:11:53 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

t_flags			ft_initialize(void)
{
	t_flags	flags;

	flags.width = 0;
	flags.star = 0;
	flags.type = 0;
	flags.minus = 0;
	flags.zero = 0;
	flags.dot = -1;
	return (flags);
}

static int		ft_parse(const char *str, int i, t_flags *flags, va_list args)
{
	while (str[i])
	{
		if (!ft_isconversion(str[i]) && !ft_isflag(str[i])
		&& !ft_isdigit(str[i]))
			break ;
		if (str[i] == '0' && flags->width == 0 && flags->minus == 0)
			flags->zero = 1;
		if (str[i] == '.')
			i = ft_dot_flag(str, i, flags, args);
		if (str[i] == '*')
			*flags = ft_width_flag(args, *flags);
		if (ft_isdigit(str[i]))
			*flags = ft_digit_flag(str[i], *flags);
		if (str[i] == '-')
			*flags = ft_minus_flag(*flags);
		if (ft_isconversion(str[i]))
		{
			flags->type = str[i];
			break ;
		}
		i++;
	}
	return (i);
}

static int		ft_handle_input(const char *str, va_list args)
{
	int		i;
	int		count;
	t_flags	flags;

	i = 0;
	count = 0;
	while (1)
	{
		flags = ft_initialize();
		if (!str[i])
			break ;
		else if (str[i] == '%' && str[i + 1])
		{
			i = ft_parse(str, ++i, &flags, args);
			if (ft_isconversion(str[i]))
				count += ft_handle((char)flags.type, flags, args);
			else if (str[i])
				count += ft_putchar(str[i]);
		}
		else if (str[i] != '%')
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int				ft_printf(const char *fmt, ...)
{
	va_list		args;
	const char	*str;
	int			count;

	count = 0;
	if (!(str = ft_strdup(fmt)))
		return (0);
	va_start(args, fmt);
	count += ft_handle_input(str, args);
	va_end(args);
	free((char*)str);
	return (count);
}
