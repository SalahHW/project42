/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:39:39 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/05 19:33:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_char(int ap);
int		ft_print_string(char *ap);
int		ft_print_hexadecimal(unsigned long long ap);
int		ft_print_integer(int ap);
int		ft_print_unsigned_decimal(unsigned int ap);
int		ft_print_lower_hexadecimal(unsigned long long ap);
int		ft_print_upper_hexadecimal(unsigned long long ap);
int		ft_print_percent(void);
int		ft_printf(const char *format, ...);
int		ft_get_number_length(int number);
char	*ft_unsigned_itoa(unsigned int ap);

#endif
