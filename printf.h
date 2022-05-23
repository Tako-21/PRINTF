/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:05:55 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/23 15:30:53 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

enum e_type { type_unsigned_int, type_long_int };
int			ft_printf(const char *str, ...);

/* CREATING A FUNCTION POINTER */
typedef int(*t_pf)(va_list);

/* PROTOTYPE OF CONVERSION INDICATORS */
int			ft_printi(va_list arg);
int			ft_printu(va_list arg);
int			ft_printx(va_list arg);
int			ft_printupx(va_list arg);
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
size_t		ft_putnbrbase(enum e_type type, long long int nb, char *base);
int			ft_checkbase(char	*base);
int			ft_strlen(char *str);
#endif
