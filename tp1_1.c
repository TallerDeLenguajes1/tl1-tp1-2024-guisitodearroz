#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero= 2, *pNumero;
    pNumero= &numero;
    printf("1)El contenido del puntero es: %d\n", *pNumero);
    printf("2)La direccion de memoria almacenada por el puntero es: %p\n",pNumero);
    printf("3)La direccion de memoria de la variable es: %p\n", &numero);
    printf("4)La direccion de memoria del puntero es: %p\n", &pNumero);
    printf("5)El tamaño de memoria de la variable es: %d bytes",sizeof(numero));

    return 0;
}

