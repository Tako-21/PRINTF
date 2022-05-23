/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:43:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 11:03:52 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printi(va_list ap)
{
	char		*base;
	long int	nb;
	int			err;

	err = 0;
	base = "0123456789";
	nb = (long int)va_arg(ap, long int);
	err = ft_putnbrbase(nb, base);
	return (err);
}

int	ft_printu(va_list ap)
{
	char		*base;
	long int	nb;
	int			err;

	base = "0123456789";
	nb = (unsigned long int)va_arg(ap, unsigned long int);
	err = ft_putnbrbase(nb, base);
	return (err);
}

int	ft_printx(va_list ap)
{
	char					*base;
	int						err;
	unsigned long long int	outhx;

	base = "0123456789abcdef";
	outhx = (unsigned long long int)va_arg(ap, unsigned long long int);
	err = ft_putnbrbase(outhx, base);
	return (err);
}

int	ft_printupx(va_list ap)
{
	char				*base;
	int					err;
	unsigned long int	outupx;

	base = "0123456789ABCDEF";
	outupx = (unsigned long int)va_arg(ap, unsigned long int);
	err = ft_putnbrbase(outHX, base);
	return (err);
}

int	ft_printprc(va_list ap)
{
	int	err;

	(void)ap;
	err = ft_putchar('%');
	return (err);
}
