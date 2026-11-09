/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:24:32 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/09 14:26:17 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

static void	test_csp(void)
{
	int	original;
	int	mine;
	int	n;

	n = 42;
	printf("\n===== C / S / P =====\n");
	original = printf("Original: %c\n", 'A');
	mine = ft_printf("Nuestro:  %c\n", 'A');
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %s\n", "Hola 42");
	mine = ft_printf("Nuestro:  %s\n", "Hola 42");
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %s\n", (char *) NULL);
	mine = ft_printf("Nuestro:  %s\n", (char *) NULL);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %p\n", &n);
	mine = ft_printf("Nuestro:  %p\n", &n);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %p\n", NULL);
	mine = ft_printf("Nuestro:  %p\n", NULL);
	printf("Retornos: %d | %d\n", original, mine);
}

static void	test_signed(void)
{
	int	original;
	int	mine;

	printf("\n===== D / I =====\n");
	original = printf("Original: %d\n", INT_MIN);
	mine = ft_printf("Nuestro:  %d\n", INT_MIN);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %i\n", -42);
	mine = ft_printf("Nuestro:  %i\n", -42);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %d\n", 0);
	mine = ft_printf("Nuestro:  %d\n", 0);
	printf("Retornos: %d | %d\n", original, mine);
}

static void	test_unsigned_hex(void)
{
	int	original;
	int	mine;

	printf("\n===== U / X / x =====\n");
	original = printf("Original: %u\n", UINT_MAX);
	mine = ft_printf("Nuestro:  %u\n", UINT_MAX);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %x | %X\n", 255, 255);
	mine = ft_printf("Nuestro:  %x | %X\n", 255, 255);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %x | %X\n", 0, 0);
	mine = ft_printf("Nuestro:  %x | %X\n", 0, 0);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %x | %X\n", UINT_MAX, UINT_MAX);
	mine = ft_printf("Nuestro:  %x | %X\n", UINT_MAX, UINT_MAX);
	printf("Retornos: %d | %d\n", original, mine);
}

static void	test_percent(void)
{
	int	original;
	int	mine;

	printf("\n===== PORCENTAJE =====\n");
	original = printf("Original: 100%%\n");
	mine = ft_printf("Nuestro:  100%%\n");
	printf("Retornos: %d | %d\n", original, mine);
}

int	main(void)
{
	test_csp();
	test_signed();
	test_unsigned_hex();
	test_percent();
	return (0);
}
