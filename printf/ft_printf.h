/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbelet <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:13:16 by lbelet            #+#    #+#             */
/*   Updated: 2021/11/08 10:14:31 by lbelet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_put_unsigned(unsigned int unb);
int	ft_putnbr_p(unsigned long nbr);
int	ft_putnbr_x(unsigned int nbr);
int	ft_putnbr_x_maj(unsigned int nbr);
int	ft_ws(const char *str, int index);
int	ft_itoc_min(int i);
int	ft_itoc_maj(int i);
int	ft_x(va_list args);
int	ft_x_maj(va_list args);
int	ft_type(va_list args, char c);
int	ft_putchar_arg(va_list args);
int	ft_putstr_arg(va_list args);
int	ft_putnbr_arg(va_list args);
int	ft_put_unsigned_arg(va_list args);
int	ft_pointeur(va_list args);

#endif
