#include <stdio.h>
int cuadradoNumero(int numero);
void cuadradoNumeroVoid(int numero);
void invertir(int a, int b);
void valorOrdenado(int a, int b);
int main()
{
    int a,b;
    printf("Ingrese un numero para saber su cuadrado\n");
    scanf("%d",&a);
    printf("El caudrado del numero %d es: %d\n",a, cuadradoNumero(a));
    printf("El cuadrado del mismo numero pero devolviendo con void: ");
    cuadradoNumeroVoid(a);
    printf("\n");
    printf("Ingrese dos numeros separados por un espacio\n");
    scanf("%d %d",&a, &b);
    invertir(a,b);
    printf("\n");
    printf("Ingrese dos numeros separados por un espacio\n");
    scanf("%d %d",&a, &b);
    valorOrdenado(a,b);
    return 0;
}
//funciones
//funcion para el cuadrado, retorno directamente el resultado para ahorrar codigo
int cuadradoNumero(int numero){
    return (numero * numero);
}
void cuadradoNumeroVoid(int numero){
    int resultado= numero * numero;
    printf("El cuadrado del numero es: %d\n", resultado);
}
void invertir(int a, int b){
    printf("Los valores de a= %d y el de b= %d\n",a,b);
    int aux=0;
    aux=a;
    a=b;
    b=aux;
    printf("Los valores nuevos para a es: %d y para b es: %d\n", a,b);
}
void valorOrdenado(int a, int b){
    int aux=0;
    if (a > b)
    {
        aux=a;
        a=b;
        b=aux;
        printf("El valor mas chico quedo en A= %d y el mas grande en B=%d\n",a,b);
    }else
    {
        printf("no es necesario cambiar; Valor de A= %d y el de B=%d",a , b);
    }
    
    
}