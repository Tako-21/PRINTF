/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:58:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 15:33:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printc(va_list ap)
{
	char	out;
	int		err;

	out = (char)va_arg(ap, int);
	err = ft_putchar(out);
	return (err);
}

int	ft_prints(va_list ap)
{
	char	*out;
	int		err;

	out = (char *)va_arg(ap, char *);
	if (!out)
		return (ft_putstr("(null)"));
	err = ft_putstr(out);
	return (err);
}

int	ft_printp(va_list ap)
{
	char					*base;
	unsigned long long int	addr;
	int						err;

	err = 0;
	base = "0123456789abcdef";
	addr = (unsigned long long int)va_arg(ap, unsigned long long int);
	if (!addr)
	{
		return (ft_putstr("(nil)"));
	}
	err = ft_putstr("0x");
	err += ft_putnbrbase(type_unsigned_int, (unsigned long int)addr, base);
	return (err);
}

int	ft_printd(va_list ap)
{
	char	*base;
	int		nb;
	int		err;

	err = 0;
	base = "0123456789";
	nb = (int)va_arg(ap, int);
	err = ft_putnbrbase(type_long_int, nb, base);
	return (err);
}
