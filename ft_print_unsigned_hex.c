/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_hex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 01:48:46 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/09 05:30:17 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_unsigned_hex(va_list args, char specifier)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_print_hex(n, specifier));
}
