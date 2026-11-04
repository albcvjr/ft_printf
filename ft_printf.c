/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:52:28 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/04 21:45:09 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

int	ft_check_format(const char *format, va_list args)
{
	int		i;
	int		count;
	int		temp;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
			temp = ft_print_char_len(format[i]);
		else
		{
			i++;
			temp = ft_print_format(format[i], args);
		}
		if (temp == -1)
			return (-1);
		count += temp;
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = ft_check_format(format, args);
	va_end(args);
	return (count);
}
