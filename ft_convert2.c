/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:58:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 11:04:59 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	err = ft_putstr("0x");
	addr = (unsigned long long int)va_arg(ap, unsigned long long int);
	if (!addr)
		ft_putstr("(nil)");
	err += ft_putnbrbase((unsigned long long int)addr, base);
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
	err = ft_putnbrbase(nb, base);
	return (err);
}
