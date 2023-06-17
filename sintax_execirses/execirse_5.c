#include <stdio.h>

int main() {
 /*
 variables en c

 Las variables son contenedores para alamacenar  
 valores de datos como números y caracteres

 En C hay diferentes tipos de variables (definidas por diferentes palabras clave), por ejemplo:

  * int - alamcena enteros (números enteros), sin decimales, como 123 o -123

  FLoat -almacena números de coma flatantes o decimales, como 19.99 o -12.99

  Char - alacena caracteres individuales, como 'a' o 'b'. Los valores de char están entre comillas simples


*/

/*
declaración (crear) variables

Para creear una variable en C, especifique el tipo y asígne un valor:

* sintaxix

tipo nombrevariable = valor;

Donde tipo es uno de los tipos de variables de C (como int) y 
nombre variable es el nombre de la variable (como X minombre). El signo igual se utiliza para asignar un valor a un variable

   */
  // crear una virable que almacene un número entero 

  /*Tambien puede asignar una variable sin asignar el valor y colocarselo más tarde
  
  Declaración de la variable 
  myNum = 15;  
  */

  /*
  si intentamos imprimir el valor de una variable en C no va a ocurrir nada si no le damos el formato específico*/
/*
  int miNum = 15;

  printf (myNum); //nada va a ocurrir
*/
  /*
  Para imprimir o hacer uso de las variables en C debemos familiarizarnos con los especificadores de formato
  */

//especificadores de formato

/*
Los espesificadores de formato se usan con la función sprinft () para decirle al compilador que tipo de datos está almacenando la variable

Un espesificador de formato comienza con un signo de %, seguido de un caracter.

Por ejemplo, para mantener el valor de una variable int debe usar el espicificador de formato %d o %i y estar entre comillas dobles, dentro de la funcion printf()

*/

/*
int miNumero = 20;
printf ("id", miNumero) //la salida es 20
*/
//Para imprimir otros tipos, use %c para char y %f para float

//decimal o de coma
/*
char miletra = 'N'
float minumerodecimal = 9.33;
//impresión de variables 

printf("%f\n",minumerodecimal);
printf("%c\n",miletra);
*/

/*
Para combinar texto y una variable, separalos con una coma dentro dela función printf
*/
/*
int main ()
{
int miNumero =50;

printf ("mi numero favorito es el: %d", miNumero);
*/
 /*
 Para imprimir diferentes tipos de varibles en un solo printf() se puede hacer lo siguiente: 
 */
//ccambiar valores de variables 

/*
Si asignamos un nuevo valor a una variable existente, sobre escribiremos el valor anterior
*/
/*
int miNumero = 19;

miNumero = 91;

printf("%d", miNumero);

*/

/*
Tambien podemos asignar el valor de una variable a otra
*/

/*
int main()
{
int miNUmero = 57;

int miOtroNúmero = 14;

//asignamos el valor de miOtro Número (14) a miNumero

miNUmero = miOtroNúmero;
//miNumero es ahora el 14, en lugar del 47

printf("%d", miNUmero);*/
/*
int main()
{
int minumero = 57;

//Declaramos una variable sin valor
int miOtroNumero;


miOtroNumero = minumero;
printf ("%d", miOtroNumero);
*/
//sumar valores de variables
int main ()
{
 int y = 8;
 int x = 15;
 int suma = x + y;

printf ("%d", suma);

}



 return 0;
}
