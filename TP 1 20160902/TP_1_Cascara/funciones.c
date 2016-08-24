#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief valida en un intervalo los valos ingresados
 *
 * \param recibe el valor a validar (z)
 * \param recibe el primer intervalo en el que tiene que validar (t)
 * \param recibe el otro valor en el que tiene que validar (w)
 * \return 1 si esta dentro de intervalo
 *         0 si esta fuera del intervalo
 */


int val_op(int z,int t,int w)
{
    if(z<=w && z>=t)
        return 1;
}

/** \brief calcula la suma
 *
 * \param recibe el valor x
 * \param recibe el valor de y
 * \return devuelve la suma entre x e y
 *
 */

void suma(int x, int y)
{
    int rta;

    rta=x+y;
    printf("\nLa suma es: %d\n",rta);

}

/** \brief calcula la resta de dos numeros
 *
 * \param recive el valor de x
 * \param recibe el valor de y
 * \return devuelve la resta de x e y
 *
 */

void resta(int x, int y)
{
    int rta;

    rta=x-y;
    printf("\nLa resta es: %d\n",rta);

}

/** \brief calcula la division
 *
 * \param recibe el valor de x
 * \param recibe el valor de y
 * \return devuelve un mensaje si y=0
 *         Devuelve la division si y!=0
 */

void division(int x, int y)
{
    float rta;
    while(y==0)
    {
        printf("\nNo se puede dividir por 0.");
        return;
    }
    rta=(float)x/y;
    printf("\nLa division es: %.2f\n",rta);

}

/** \brief calcula la multiplicacion
 *
 * \param recibe el valor de x
 * \param recibe el valor de y
 * \return devuelve la mutiplicaion
 *
 */

void multiplicacion(int x, int y)
{
    int rta;

    rta=x*y;
    printf("\nLa multiplicacion es: %d\n",rta);

}

/** \brief Calcula el Factorial de un numero
 *
 * \param Recibe el valor de x
 * \return Devuelve un mensaje si x==0
 *         devuelve el resultado si x!=0
 */

void factorial(int x)
{
    int fact,rta,band;

    while(x==0)
    {
        printf("\nError. no existe Factorial de 0\n");
        return;

    }
    if(x!=1)
        {
            fact=x-1;
            rta=x;
            while(fact>=1)
            {
                rta=rta*fact;
                fact--;
            }
            printf("\nEl factorial es: %d\n",rta);
        }
    else if(x==1)
    {
        printf("\nEl factorial es: 0\n");
    }

}

/** \brief Muestra el menu de opciones, y se elije que opcion
 *
 * \param
 * \param
 * \return devuelve un mensaje si se ingresasa un opcion que no existe
 *         la opcion que se elije
 */

int menu(void)
{
    int opcion;
    printf("1- Ingresar 1er operando (A=x)\n");
    printf("2- Ingresar 2do operando (B=y)\n");
    printf("3- Calcular la suma (A+B)\n");
    printf("4- Calcular la resta (A-B)\n");
    printf("5- Calcular la division (A/B)\n");
    printf("6- Calcular la multiplicacion (A*B)\n");
    printf("7- Calcular el factorial (A!)\n");
    printf("8- Calcular todas las operacione\n");
    printf("9- Salir\n");

    printf("\n\nIngrese opcion: ");
    scanf("%d",&opcion);
    while(val_op(opcion,1,9)!=1)
        {
            printf("\nReingrese opcion entre 1 y 9.\nReingrese opcion: ");
            system("pause");
            break;
        }
    return opcion;
}
