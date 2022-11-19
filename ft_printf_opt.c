/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_opt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:47:26 by isidki            #+#    #+#             */
/*   Updated: 2022/11/19 17:18:40 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		r += ft_putchar(s[i]);
		i++;
	}
	return (r);
}

int	ft_putnbr(int c)
{
	long int	i;
	int			r;

	i = c;
	r = 0;
	if (i < 0)
	{
		r += ft_putchar('-');
		i *= -1;
	}
	if (i < 10)
		r += ft_putchar(i + 48);
	if (i >= 10)
	{
		r += ft_putnbr((i / 10));
		r += ft_putnbr((i % 10));
	}
	return (r);
}

int	ft_signed_hex(unsigned long i, char c)
{
	int		r;
	char	*base;

	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	r = 0;
	if (i < 16)
		r += ft_putchar(base[i]);
	if (i >= 16)
	{
		r += ft_signed_hex((i / 16), c);
		r += ft_signed_hex((i % 16), c);
	}
	return (r);
}

int	ft_unsigned_decimal(unsigned int i)
{
	int	r;

	r = 0;
	if (i < 10)
		r += ft_putchar(i + 48);
	if (i >= 10)
	{
		r += ft_unsigned_decimal((i / 10));
		r += ft_unsigned_decimal((i % 10));
	}
	return (r);
}
