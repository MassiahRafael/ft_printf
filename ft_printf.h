/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:30:26 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 19:57:09 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

# define BASEUP "0123456789ABCDEF"
# define BASELOW "0123456789abcdef"

int		ft_printf(const char *str, ...);

int		ft_scan_type(char c, va_list parameters);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

int		ft_char_type(va_list parameters);

int		ft_str_type(va_list parameters);

int		ft_dec_type(va_list parameters);

int		ft_int_type(va_list parameters);

int		ft_unsignint_type(va_list parameters);

int		ft_pointer_type(va_list parameters);

int		ft_low_hexa_type(va_list parameters);

int		ft_up_hexa_type(va_list parameters);

int		ft_percent_type(void);

#endif
