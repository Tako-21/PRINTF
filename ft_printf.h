#ifndef __PRINTF__H
#define __PRINTF__H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *str, ...);

/* CREATING A FUNCTION POINTER */
typedef int(*t_pf)(va_list);

/* PROTOTYPE OF CONVERSION INDICATORS */
int			ft_printi(va_list arg);
int			ft_printu(va_list arg);
int			ft_printx(va_list arg);
int			ft_printX(va_list arg);
int			ft_printprc(va_list arg);
int			ft_printc(va_list arg);
int			ft_prints(va_list arg);
int			ft_printp(va_list arg);
int			ft_printd(va_list arg);

/* PROTOTYPE OF THE PARSING FUNCTION */
t_pf		ft_idformat(char c);

/* UTILS FUNCTIONS */
int			ft_putchar(char c);
int			ft_putstr(char *str);
void		ft_putnbrbase(long long int nb, char *base, int *err);
int			ft_checkbase(char	*base);
int			ft_strlen(char *str);
#endif
