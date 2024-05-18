/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_uppercase_fd.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:18:08 by martjim2          #+#    #+#             */
/*   Updated: 2024/05/15 16:54:29 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number_hexa_uppercase(unsigned long numero)
{
	ft_putnbr_uppercase_fd (numero, 1);
	return (ft_othername(numero));
}

void	ft_putnbr_uppercase_fd(unsigned long n, int fd)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 16 && n > 0)
		ft_putchar_fd (base[n], fd);
	else
	{
		ft_putnbr_uppercase_fd(n / 16, fd);
		ft_putchar_fd(base[n % 16], fd);
	}
}

/*
int	ft_lenint(long int n)
{
	long int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
*/
