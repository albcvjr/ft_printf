/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainPrintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:24:32 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/12 16:24:48 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

static void	test_partial_write_error(void)
{
	int	saved_stdout;
	int	result;

	printf("\n===== error parcial =====\n");
	saved_stdout = dup(1);
	ft_printf("ABC");
	close(1);
	result = ft_printf("DEF");
	dup2(saved_stdout, 1);
	close(saved_stdout);
	printf("\nRetorno tras imprimir ABC: %d\n", result);
}

static void	test_write_error(void)
{
	int	result;

	printf("\n===== error write =====\n");
	close(1);
	result = ft_printf("Hola 42");
	dup2(2, 1);
	printf("\nRetorno tras error de write: %d\n", result);
}

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
	original = printf("Original: %s\n", "");
	mine = ft_printf("Nuestro:  %s\n", "");
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

static void	test_nums(void)
{
	int	original;
	int	mine;

	printf("\n===== D / I / U / X / x =====\n");
	original = printf("Original: %d %i\n", INT_MIN, -42);
	mine = ft_printf("Nuestro:  %d %i\n", INT_MIN, -42);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %u\n", UINT_MAX);
	mine = ft_printf("Nuestro:  %u\n", UINT_MAX);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %x | %X\n", 255, 255);
	mine = ft_printf("Nuestro:  %x | %X\n", 255, 255);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %x | %X\n", UINT_MAX, UINT_MAX);
	mine = ft_printf("Nuestro:  %x | %X\n", UINT_MAX, UINT_MAX);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %d %u %x %X\n", 0, 0, 0, 0);
	mine = ft_printf("Nuestro:  %d %u %x %X\n", 0, 0, 0, 0);
	printf("Retornos: %d | %d\n", original, mine);
}

static void	test_edges(void)
{
	int	original;
	int	mine;

	printf("\n===== CASOS LIMITE =====\n");
	original = printf("Original: %c\n", '\0');
	mine = ft_printf("Nuestro:  %c\n", '\0');
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %d%d%d\n", 1, 2, 3);
	mine = ft_printf("Nuestro:  %d%d%d\n", 1, 2, 3);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: A%dB%sC%x\n", 42, "hola", 255);
	mine = ft_printf("Nuestro:  A%dB%sC%x\n", 42, "hola", 255);
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("");
	mine = ft_printf("");
	printf("Retornos formato vacio: %d | %d\n", original, mine);
}

static void	test_percent(void)
{
	int	original;
	int	mine;

	printf("\n===== PORCENTAJES =====\n");
	original = printf("Original: 100%%\n");
	mine = ft_printf("Nuestro:  100%%\n");
	printf("Retornos: %d | %d\n", original, mine);
	original = printf("Original: %%%%\n");
	mine = ft_printf("Nuestro:  %%%%\n");
	printf("Retornos: %d | %d\n", original, mine);
}

int	main(void)
{
	test_partial_write_error();
	test_write_error();
	test_csp();
	test_nums();
	test_edges();
	test_percent();
	printf("\n===== FORMATO NULL =====\n");
	printf("Nuestro retorno: %d\n", ft_printf(NULL));
	return (0);
}
