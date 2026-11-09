/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:13:55 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/09 15:14:27 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			if (format[i] == '\0')
				return (-1);
			temp = ft_print_format(format[i], args);
		}
		if (temp == -1)
			return (-1);
		count += temp;
		i++;
	}
	return (count);
}
