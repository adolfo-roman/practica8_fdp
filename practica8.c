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

    do
    {
        printf("Escoge la temperatura inicial: \n");
        printf("\n");
        printf("1) Celsius\n");
        printf("2) Fahrenheit\n");
        printf("3) Kelvin\n");

        printf("\n");

        scanf("%i", &a);

        printf("\n");

        if (a < 1 || a > 3)
        {
            printf("Por favor ingrese una opcion valida\n");
            printf("\n");
        }
    }
    while (a < 1 || a > 3);

    switch (a) {
      case 1:
      do
      {
          printf("Escoge la temperatura final: \n");
          printf("\n");
          printf("1) Fahrenheit\n");
          printf("2) Kelvin\n");

          printf("\n");

          scanf("%i", &b);

          printf("\n");

          if (b < 1 || b > 2)
          {
              printf("Por favor ingrese una opcion valida\n");
              printf("\n");
          }
      }
      while (a < 1 || a > 3);
      break;


    }

}
