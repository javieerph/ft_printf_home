/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 03:43:40 by ejavier-          #+#    #+#             */
/*   Updated: 2025/05/03 03:45:04 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa_base(unsigned long num, int base)
{
    char *str;
    char *digits = "0123456789abcdef";
    int len = 0;
    unsigned long temp = num;

    while (temp)
    {
        temp /= base;
        len++;
    }
    if (num == 0)
        len = 1;

    str = (char *)ft_calloc((len + 1), sizeof(char));
    if (!str)
        return NULL;
    
    str[len] = '\0';

    while (len--)
    {
        str[len] = digits[num % base];
        num /= base;
    }

    return str;
}