/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:47:52 by isidki            #+#    #+#             */
/*   Updated: 2022/11/19 16:49:17 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
int	ft_unsigned_decimal(unsigned int c);
int	ft_signed_hex(unsigned long i, char c);
int	ft_putnbr(int c);
int	ft_putstr(char *s);

#endif
