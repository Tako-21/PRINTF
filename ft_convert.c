/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:43:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 15:32:10 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printi(va_list ap)
{
	char		*base;
	int			nb;
	int			err;

	err = 0;
	base = "0123456789";
	nb = (int)va_arg(ap, int);
	err = ft_putnbrbase(type_long_int, nb, base);
	return (err);
}

int	ft_printu(va_list ap)
{
	char				*base;
	long int			nb;
	long int			err;

	base = "0123456789";
	nb = (unsigned int)va_arg(ap, unsigned int);
	err = ft_putnbrbase(type_unsigned_int, nb, base);
	return (err);
}

int	ft_printx(va_list ap)
{
	char					*base;
	int						err;
	unsigned long int		outhx;

	base = "0123456789abcdef";
	outhx = (unsigned int)va_arg(ap, unsigned int);
	err = ft_putnbrbase(type_long_int, outhx, base);
	return (err);
}

int	ft_printupx(va_list ap)
{
	char				*base;
	int					err;
	unsigned long int	outupx;

	base = "0123456789ABCDEF";
	outupx = (unsigned int)va_arg(ap, unsigned int);
	err = ft_putnbrbase(type_long_int, outupx, base);
	return (err);
}

int	ft_printprc(va_list ap)
{
	int	err;

	(void)ap;
	err = ft_putchar('%');
	return (err);
}
