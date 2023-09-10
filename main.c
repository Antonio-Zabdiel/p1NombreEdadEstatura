#include <stdio.h>
//#include <conio.h>//no es estandar y no se recomienda

int main() {
   char nombre[5]; //[n] indica numero de caracteres
   int edad;
   float altura;

   printf("Dime tu nombre: ");
   scanf("%s", &nombre);//escanea y le pones % y una letra que indica el tipo de dato y le pones la variable  y siempre antes de la variable se coloca &

   printf("Dame tu edad: ");
   scanf("%d", &edad);
   
   printf("Dame tu altura: ");
   scanf("%f", &altura);

   printf("hola '%s' ya se que tienea '%d' anios y que mides '%.2f' metros", nombre, edad, altura);

   return 0; //todas las funciones devuelven un valor, a no ser que se ponga "void" y te ahorras una linea 
}
