/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:37:39 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/04 22:21:33 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>;
#include <unistd.h>;

int	ft_printf(const char *format, ...);
int	ft_print_csp(char specifier, va_list args);
