/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 20:38:48 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/08 21:10:35 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_signed(va_list args)
{
	long	n;
	int		count;
	int		result;

	n = va_arg(args, int);
	result = 0;
	if (n < 0)
	{
		result = ft_print_char_len('-');
		if (result == -1)
			return (-1);
		n = -n;
	}
	count = ft_print_decimal(n);
	if (count == -1)
		return (-1);
	result += count;
	return (result);
}
