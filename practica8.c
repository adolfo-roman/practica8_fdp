#include <stdio.h>

/*
En esta practica escogi hacer un programa que originalmente iba a
hacer para la practica 7, pero mejor lo cambiare para esta ya que me
gustaria probar con switch
*/

int main (void) {

    //Declarar variables
    float c, f, k;
    int a, b;

    //Estructura primer caso
    printf("***Convertidor de Temperatura***\n");
    printf("\n");
    printf("Escoge la temperatura inicial:");
    printf("\n");
    printf("1) Celsius\n");
    printf("2) Fahrenheit\n");
    printf("3) Kelvin\n");
    printf("\n");

    scanf("%i", &a);

    while (a != 1 || a != 2 || a != 3)
    {
        printf("Por favor ingrese una opcion valida\n");
        main()
    }


    printf("Escogiste: %i", a);

}
