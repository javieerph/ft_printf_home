/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:34:16 by ejavier-          #+#    #+#             */
/*   Updated: 2025/05/03 04:43:24 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int print_num(int n)
{
    int len;
    char *str;
    
    str = ft_itoa(n);
    len = ft_strlen(str);
    ft_putstr_fd(str, 1);
    free(str);
    return (len);
}

int print_char(int c)
{
    write(1, &c, 1);
    return (1);
}

int print_str(char *str)
{
    int len;
    
    len = ft_strlen(str);
    ft_putstr_fd(str, 1);
    free(str);
    return (len);
}

int print_uns(unsigned int n)
{
    int len;
    char *str;

    str = ft_itoa_base(n, 10);
    ft_putstr_fd(str, 1);
    len = ft_strlen(str);
    free(str);

    return len;
}

int print_hexa(unsigned int num, int uppercase)
{
    int len;
    char *hex_str;
    int i;
    
    hex_str = ft_itoa_base(num, 16);
    if (uppercase)
    {
        i = 0; 
        while (hex_str[i])
        {
            if (hex_str[i] >= 'a' && hex_str[i] <= 'f')
                hex_str[i] -= 32;
            i++;
        }
    }
    ft_putstr_fd(hex_str, 1);
    len = ft_strlen(hex_str);
    free(hex_str);

    return len;
}

int print_perc()
{
    print_char('%');
    return (1);
}