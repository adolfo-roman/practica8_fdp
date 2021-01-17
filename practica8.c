#include <stdio.h>

/*
En esta practica escogi hacer un programa que originalmente iba a
hacer para la practica 7, pero mejor lo cambiare para esta ya que me
gustaria probar con switch
*/

int main (void) {

    //Declarar variables
    float temp, res;
    int a, b, c;

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
      while (b < 1 || b > 2);

      if(b == 1)
      {
        c = 12;
      }
      else
      {
        c = 13;
      }
      break;

      case 2:
      do
      {
          printf("Escoge la temperatura final: \n");
          printf("\n");
          printf("1) Celsius\n");
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
      while (b < 1 || b > 2);

      if(b == 1)
      {
        c = 21;
      }
      else
      {
        c = 23;
      }
      break;

      case 3:
      do
      {
          printf("Escoge la temperatura final: \n");
          printf("\n");
          printf("1) Celsius\n");
          printf("2) Fahrenheit\n");

          printf("\n");

          scanf("%i", &b);

          printf("\n");

          if (b < 1 || b > 2)
          {
              printf("Por favor ingrese una opcion valida\n");
              printf("\n");
          }
      }
      while (b < 1 || b > 2);

      if(b == 1)
      {
        c = 31;
      }
      else
      {
        c = 32;
      }
      break;

    }

    printf("Por favor ingrese la temperatura a convertir: \n");
    scanf("%f", &temp);

    switch (c) {
      case 12:
        res = ((9*temp)/5)+32;
        printf("%.1f Celsius es igual a %.1f Fahrenheit", temp, res);
        break;

      case 13:
        res = temp + 273.15;
        printf("%.1f Celsius es igual a %.2f Kelvin", temp, res);
        break;
    }


}
