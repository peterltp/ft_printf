/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:04:15 by ple-              #+#    #+#             */
/*   Updated: 2022/12/21 15:51:47 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int		ft_print_char(int c);
int		ft_format(va_list args, const char format);
int		ft_printf(const char *format, ...);
void	ft_put_str(char *str);
int		ft_print_str(char *str);
int		ft_print_percent(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_len_ptr(size_t number);
void	ft_put_ptr(size_t number);
int		ft_number_len(unsigned int num);
char	*ft_unsigned_itoa(unsigned int num);
int		ft_print_unsigned(unsigned int num);
int		ft_hex_len(unsigned int number);
void	ft_hex(unsigned int number, const char format);
int		ft_print_hex(unsigned int number, const char format);
int	    ft_print_nbr(int n);

#endif

