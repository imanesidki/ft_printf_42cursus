/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:37:25 by isidki            #+#    #+#             */
/*   Updated: 2022/11/19 11:52:53 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_printf(const char *s, ...);
int	ft_unsigned_decimal(unsigned int c);
int	ft_signed_hex(unsigned int c);
int	ft_putnbr(int c);
int	ft_putstr(char *s);
int	ft_putchar(int c);

#endif
