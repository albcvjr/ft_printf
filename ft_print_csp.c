/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_csp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:00:11 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/12 16:24:48 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_csp(char specifier, va_list args)
{
	int		result;
	char	*str;
	void	*ptr;

	if (specifier == 'c')
	{
		result = va_arg(args, int);
		return (ft_print_char_len(result));
	}
	else if (specifier == 's')
	{
		str = va_arg(args, char *);
		return (ft_print_str(str));
	}
	else if (specifier == 'p')
	{
		ptr = va_arg(args, void *);
		return (ft_print_mem(ptr));
	}
	return (-1);
}
