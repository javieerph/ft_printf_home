/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:01:44 by ejavier-          #+#    #+#             */
/*   Updated: 2025/05/03 07:08:07 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		data_type(va_list args, const char data);
int		print_num(int n);
int		print_char(int c);
int		print_str(char *str);
char	*ft_itoa_base(unsigned long num, int base);
int		print_hexa(unsigned int num, int uppercase);
int		print_uns(unsigned int n);
int		print_ptr(void *ptr);
int		print_perc(void);
#endif
