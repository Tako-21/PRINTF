#include "ft_convert2.h"

int	ft_printc(va_list ap)
{
	char	out;

	out = (char)va_arg(ap, int);
	ft_putchar(out);
}

int	ft_prints(va_list ap)
{
	char	*s;

	s = (char *)va_arg(ap, char *);
	ft_putstr(s);
}

int	ft_printp(va_list ap)
{

}

int	ft_printd(va_list ap)
{

}
