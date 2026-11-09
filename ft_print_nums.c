/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:00:26 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/09 05:28:46 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_nums(char specifier, va_list args)
{
	if (specifier == 'd' || specifier == 'i')
		return (ft_print_signed(args));
	else if (specifier == 'u')
		return (ft_print_unsigned(args));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_print_unsigned_hex(args, specifier));
	return (-1);
}
