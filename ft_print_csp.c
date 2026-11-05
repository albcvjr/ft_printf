/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_csp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:00:11 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/05 17:55:30 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_csp(char specifier, va_list args)
{
	int	result;

	result = 0;
	if (specifier == 'c')
	{
		va_arg(args, int);
		result = ft_print_char_len();
		return (result);
	}
	else if (specifier == 's')
	{
		return ();
	}
	else if (specifier == 'p')
	{
		return ();
	}
}
