#include "includes.h"

int	ft_printc(va_list ap)
{
	char	out;

	out = (char)va_arg(ap, int);
	ft_putchar(out);
}

int	ft_prints(va_list ap)
{
	char	*out;

	out = (char *)va_arg(ap, char *);
	ft_putstr(out);
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
	ft_putnbrbase(addr, base);
}

int	ft_printd(va_list ap)
{
	char *base;
	long int nb;

	base = "0123456789";

	nb = (long int)va_arg(ap, long int);
	ft_putnbrbase(nb, base);
}
