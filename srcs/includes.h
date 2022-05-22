/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:14:00 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/05/22 17:56:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

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
void		ft_putnbrbase(unsigned long long int nb, char *base);
int			ft_checkbase(char	*base);

/* PROTOTYPE OF THE PARSING FUNCTION */
t_pf		ft_idformat(char c);

/* UTILS FUNCTIONS */
void		ft_putchar(char c);
void		ft_putstr(char *str);

#endif
