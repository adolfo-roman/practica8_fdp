#include <stdio.h>
#include <stdlib.h>

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
    system("clear");
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
            system("clear");
            printf("Por favor ingrese una opcion valida\n");
            printf("\n");
        }
    }
    while (a < 1 || a > 3);

    enum conv {CF, CK, FC, FK, KC, KF};
    enum conv valorConv;

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
        valorConv = CF;
      }
      else
      {
        valorConv = CK;
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
        valorConv = FC;
      }
      else
      {
        valorConv = FK;
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
        valorConv = KC;
      }
      else
      {
        valorConv = KF;
      }
      break;

    }

    printf("Por favor ingrese la temperatura a convertir: \n");
    scanf("%f", &temp);

    switch (valorConv) {
      case CF: //Convierte C -> F
        res = ((9*temp)/5)+32;
        printf("%.1f Celsius es igual a %.1f Fahrenheit\n", temp, res);
        break;

      case CK: //Convierte C -> K
        res = temp + 273.15;
        printf("%.1f Celsius es igual a %.2f Kelvin", temp, res);
        break;

      case FC: //Convierte F -> C
        res = (5/9)*(temp-32);
        printf("%.1f Fahrenheit es igual a %.1f Celsius", temp, res);
        break;

      case FK: //Convierte F -> K
        res = (5/9)*(temp-32);
        printf("%.1f Fahrenheit es igual a %.2f Kelvin", temp, res);
        break;

      case KC: //Convierte K -> C
        res = (5/9)*(temp-32);
        printf("%.2f Kelvin es igual a %.1f Celsius", temp, res);
        break;

      case KF: //Convierte K -> F
        res = (5/9)*(temp-32);
        printf("%.2f Kelvin es igual a %.1f Fahrenheit", temp, res);
        break;

    }


}
