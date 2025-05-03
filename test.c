//#include <stdio.h>
#include "printf.h"
#include "libft.h"

int main() 
{
    //printf("The int is: %d\nThe char is %c\n", 42, 'H');
    ft_printf("The int is: %d\nThe char is %c\n", 42, 'H');

    //int count = printf("The int is: %d\nThe char is %c\n", 42, 'H');
    //printf("Número de caracteres impresos: %d\n", count);

    int count = ft_printf("The int is: %d\nThe char is %c\n", 42, 'H');
    ft_printf("Número de caracteres impresos: %d\n", count);

    ft_printf("Hex minúsculas: %x\n", 255);
    ft_printf("Hex mayúsculas: %X\n", 255);

    ft_printf("Entero: %d\n", -42);
    ft_printf("Entero sin signo: %u\n", 4294967295);
    ft_printf("El puntero es: %p\n", (void *)0x1234abcd);
    ft_printf("Este es el peor: %%\n", '%');

    return 0;
}
