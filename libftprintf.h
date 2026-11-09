/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:37:39 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/09 01:49:37 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(char specifier, va_list args);
int	ft_check_format(const char *format, va_list args);
int	ft_print_csp(char specifier, va_list args);
int	ft_print_nums(char specifier, va_list args);
int	ft_print_char_len(int c);
int	ft_print_str(char *str);
int	ft_print_mem(void *ptr);
int	ft_print_decimal(long n);
int	ft_print_signed(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_hex(uintptr_t n, char specifier);
int	ft_print_unsigned_hex(va_list args, char specifier);
