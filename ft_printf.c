/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:44:45 by ejavier-          #+#    #+#             */
/*   Updated: 2025/05/01 13:01:49 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int ft_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%' && *(format + 1) == 'd') {
            int num = va_arg(args, int);
            ft_putnbr_fd(num, 1);
            format++;
        } else {
            ft_putchar_fd(*format, 1);
        }
        format++;
    }

    va_end(args);
    return 0;
}
int main() {
    ft_printf("El número es: %d\n", 42);
    return 0;
}
