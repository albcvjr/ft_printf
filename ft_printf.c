/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:52:28 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/04 15:33:45 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (-1);
	va_start(ap, format);
	count = ft_parse_format(format, ap);
	va_end(ap);
	return (count);
}
int	ft_parse_format(format, ap)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write (1, &format[i], 1);
			i++;
		}
		else
		{
			ft_print_format();
			i++;
		}
	}
}

int	ft_print_format()
{
	
}