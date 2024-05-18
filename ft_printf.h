/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:12:29 by martjim2          #+#    #+#             */
/*   Updated: 2024/05/02 17:55:44 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <stdarg.h>
# include <unistd.h>

unsigned int	format(char c, va_list args);
int				ft_printf(char const *collar, ...);
int				ft_putchar_fd(char c, int fd);
int				print_number(int numero);
int				ft_lenint(long int n);
void			ft_putnbr_fd(int n, int fd);
int				print_number_hexa_lowercase(unsigned long long numero);
void			ft_putnbr_lowercase_fd(unsigned long long n, int fd);
int				print_number_hexa_uppercase(unsigned long numero);
void			ft_putnbr_uppercase_fd(unsigned long n, int fd);
int				ft_putpointer(unsigned long long ptr);
int				ft_putstr_fd(char *s, int fd);
int				print_unsign_number(unsigned int numero);
void			ft_unsign_putnbr_fd(unsigned int n, int fd);
void			ft_putnbr2_fd(unsigned long n, int fd);
int				ft_othername(unsigned long n);

#endif
