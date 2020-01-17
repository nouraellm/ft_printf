/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:03:14 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/17 21:13:58 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isdigit(int c);
int			ft_tolower(int c);
char		*ft_itoa(int n);
int			ft_putchar(char c);
char		*ft_str_tolower(char *str);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *str);
int			ft_putsp(char *str, int precision);
char		*ft_utl_base(unsigned long long number, int base);

#endif
