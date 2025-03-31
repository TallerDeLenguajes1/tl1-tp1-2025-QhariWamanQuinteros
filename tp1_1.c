#include <stdio.h>

int main(){
    char letra='Q';
    char *puntero;
    puntero = &letra;

    printf("Hola Mundo!!\n");

    printf("El contenido del puntero: %c\n", *puntero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("La direccion de memoria de la variable: %p\n", &letra);
    printf("La direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamanio de la variable letra= %zu bytes", sizeof(letra));


    return 0;
}