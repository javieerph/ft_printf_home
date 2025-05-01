/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:34:16 by ejavier-          #+#    #+#             */
/*   Updated: 2025/05/01 12:23:23 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void ejemplo_variadic(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int num = va_arg(args, int);  // Obtiene el primer argumento
    printf("Número recibido: %d\n", num);

    va_end(args);
}

int main() {
    ejemplo_variadic("number", 25);  // Llamando con un argumento extra
    return 0;
}
