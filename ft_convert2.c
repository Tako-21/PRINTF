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
	err = ft_putstr(out);
	return (err);
}

int	ft_printp(va_list ap)
{
	char	*base;
	unsigned long long int addr;
	int		err;

	err = 0;
	base = "0123456789abcdef";
	ft_putstr("0x");
	addr = (unsigned long long int)va_arg(ap, unsigned long long int);
	if (!addr)
		ft_putstr("nil");
	ft_putnbrbase((unsigned long long int)addr, base, &err);
	return (err);
}

int	ft_printd(va_list ap)
{
	int	err;
	char *base;
	int nb;

	err = 0;
	base = "0123456789";
	nb = (int)va_arg(ap, int);
	ft_putnbrbase(nb, base, err);
	return (1);
}
