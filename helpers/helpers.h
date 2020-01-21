/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <nel-alla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:03:14 by nel-alla          #+#    #+#             */
/*   Updated: 2020/01/20 00:37:38 by nel-alla         ###   ########.fr       */
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
char		*ft_u_itoa(unsigned int n);
char		*ft_utl_base(unsigned long long number, int base);

#endif
