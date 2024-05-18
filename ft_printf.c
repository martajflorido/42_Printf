/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:22:09 by martjim2          #+#    #+#             */
/*   Updated: 2024/05/02 18:34:43 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	format(char c, va_list args)
{
	unsigned int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		i += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'p')
		i += ft_putpointer (va_arg(args, unsigned long));
	else if (c == 'i' || c == 'd')
		i += print_number (va_arg(args, int));
	else if (c == 'u')
		i += print_unsign_number (va_arg(args, unsigned int));
	else if (c == 'x')
		i += print_number_hexa_lowercase (va_arg(args, unsigned int));
	else if (c == 'X')
		i += print_number_hexa_uppercase (va_arg(args, unsigned int));
	else if (c == '%')
		i += ft_putchar_fd('%', 1);
	return (i);
}

int	ft_printf(char const *collar, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	total;

	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	total = 0;
	va_start (args, collar);
	while (collar[i])
	{
		if (collar[i] == '%')
		{
			i++;
			total += format (collar[i], args);
		}
		else
			total += ft_putchar_fd(collar[i], 1);
		i++;
	}
	va_end (args);
	return (total);
}

/*
#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	printf("%d\n", printf ("%p\n", (void *)-1));
	printf("%d\n", ft_printf ("%p\n", (void *)-1));
}
*/
