#include "ft_printf.h"

int	ft_printc(va_list ap)
{
	char	out;

	out = (char)va_arg(ap, int);
	ft_putchar(out);
	return (1);
}

int	ft_prints(va_list ap)
{
	char	*out;

	out = (char *)va_arg(ap, char *);
	ft_putstr(out);
	return (1);
}

int	ft_printp(va_list ap)
{
	char	*base;

	base = "0123456789abcdef";
	unsigned long long int addr;

	ft_putstr("0x");
	addr = (unsigned long long int)va_arg(ap, unsigned long long int);
	if (!addr)
		ft_putstr("nil");
	ft_putnbrbase((unsigned long long int)addr, base);
	return (1);
}

#include <stdio.h>

int	ft_printd(va_list ap)
{
	char *base;
	int nb;

	base = "0123456789";

	nb = (int)va_arg(ap, int);
	ft_putnbrbase(nb, base);
	return (1);
}
