/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 02:25:02 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/20 00:37:42 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

size_t	ft_strlen(const char *str)
{
	size_t len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
