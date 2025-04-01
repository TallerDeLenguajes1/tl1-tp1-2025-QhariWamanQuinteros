#include <stdio.h>

int cuadrado(int numero);
void cuadrad(int numero, int resultado);
void direccion_y_contenido(char *variable);
void Invertir(int a, int b);
void orden(int a, int b);

int main()
{
    int numero, resultado;
    char var = 'W';
    int a, b;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    resultado = cuadrado(numero);
    printf("El cuadrado de %d es %d", numero, resultado);

    resultado = 0;
    cuadrad(numero, resultado);

    direccion_y_contenido(&var);
    printf("\nDireccion de memoria de la variable: %p", &var);

    printf("\nIngrese 2 numeros: ");
    scanf("%d %d", &a, &b);
    Invertir(a, b);

    orden(a, b);

    return 0;
}

int cuadrado(int numero)
{
    return (numero) * (numero);
}

void cuadrad(int numero, int resultado)
{
    resultado = (numero) * (numero);
    printf("\nEl resultado del cuadrado de %d es %d", numero, resultado);
}

void direccion_y_contenido(char *variable)
{
    printf("\nLa direccion de la variable es %p", &(*variable));
    printf("\nEl contenido de la variable es %c", *variable);
}

void Invertir(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("\nLos numeros ingresados son %d y %d", a, b);
}

void orden(int a, int b)
{
    if (a > b)
    {
        int aux;
        aux = a;
        a = b;
        b = aux;
    }
    printf("\nLos numeros ordenados: %d - %d", a, b);
}