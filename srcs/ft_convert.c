/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:43:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/22 18:17:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_printi(va_list ap)
{
	char *base;
	long int nb;

	base = "0123456789";

	nb = (long int)va_arg(ap, long int);
	ft_putnbrbase(nb, base);
}

int	ft_printu(va_list ap)
{
	char *base;
	long int nb;

	base = "0123456789";

	nb = (unsigned long int)va_arg(ap, unsigned long int);
	ft_putnbrbase(nb, base);
}

int	ft_printx(va_list ap)
{
	char	*base;

	base = "0123456789abcdef";
	unsigned long long int outhx;

	outhx = (unsigned long long int)va_arg(ap, unsigned long long int);
	ft_putnbrbase(outhx, base);
}

int	ft_printX(va_list ap)
{
	char	*base;

	base = "0123456789ABCDEF";
	unsigned long int outHX;

	outHX = (unsigned long int)va_arg(ap, unsigned long int);
	ft_putnbrbase(outHX, base);
}

int	ft_printprc(va_list ap)
{
	ft_putchar('%');
}
