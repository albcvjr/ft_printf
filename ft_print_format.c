/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:14:42 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/12 16:24:48 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list args)
{
	if (specifier == 'c' || specifier == 's' || specifier == 'p')
		return (ft_print_csp(specifier, args));
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u'
		|| specifier == 'x' || specifier == 'X')
		return (ft_print_nums(specifier, args));
	else if (specifier == '%')
		return (ft_print_char_len('%'));
	return (0);
}
