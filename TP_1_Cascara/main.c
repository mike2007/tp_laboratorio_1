#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,x,y,i,band=1,band2=1;
    int sum=0,res=0,multi=0;
    int fac;
    float divi=0;

    while(seguir=='s')
    {
        printf("\n   ...CALCULADORA...");
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("\n2- Ingresar 2do operando (B=y)\n");
        printf("\n3- Calcular la suma (A+B)\n");
        printf("\n4- Calcular la resta (A-B)\n");
        printf("\n5- Calcular la division (A/B)\n");
        printf("\n6- CCalcular la multiplicacion (A*B)\n");
        printf("\n7- Calcular el factorial (A!)\n");
        printf("\n8- Calcular todas las operacione\n");
        printf("\n9- Salir\n");

        printf("\n\nElija una opcion: ");
        scanf("%d",&opcion);
        while(valrango(opcion)!=1)
        {
            printf("\nError. Reingrese opcion entre 1 y 9.\nReingrese opcion: ");
            printf("\n\n");
            scanf("%d",&opcion);
        }

        //system("pause");
        system("cls");
        switch(opcion)
        {
            system("cls");
            case 1:
                printf("\nIngrese numero: ");
                scanf("%d",&x);
                printf("\nUsted a ingresado %d",x);
                printf("\n\n");
                band=0;
                system("pause");
                system("cls");
                break;
            case 2:
                printf("\nIngrese numero: ");
                scanf("%d",&y);
                printf("\nUsted a ingresado %d",y);
                printf("\n\n");
                band2=0;
                system("pause");
                system("cls");
                break;
            case 3://suma
                if(band==1 || band2==1)
                {
                    printf("\nError. Valores en A o B vacios.\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    sum=suma(x,y);
                    printf("\nLa suma de %d+%d=%d\n\n",x,y,sum);
                    system("pause");
                    system("cls");
                }

                break;
            case 4://Resta
                if(band==1 || band2==1)
                {
                    printf("\nError. Reingrese valores en A y B.\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    res=resta(x,y);
                    printf("\nLa resta de %d-%d=%d\n\n",x,y,res);
                    system("pause");
                    system("cls");
                }
                break;
            case 5://division
                if(band==1 || band2==1)
                {
                    printf("\nError. Valores en A o B vacios.\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {

                    if(y<1)
                    {
                        printf("\nError. No se puede dividir por un numero menor a 0.\nReingrese valor de b.\n");
                        system("pause");
                        system("cls");
                        break;
                    }
                    else
                    {
                        divi=division(x,y);
                        printf("\nLa Division de %d/%d=%.2f\n",x,y,divi);
                        system("pause");
                        system("cls");
                    }

                }
                break;
            case 6://multiplicacion
                if(band==1 || band2==1)
                {
                    printf("\nError. Valores en A o B vacios.\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {

                    multi=multiplicacion(x,y);
                    printf("\nLa multiplicacion de %dx%d=%d\n",x,y,multi);
                    system("pause");
                    system("cls");
                }
                break;
            case 7:
                if(band==1)
                {
                    printf("\nError. Valores en A vacio.\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    if(x<0)
                    {
                        printf("\nError. Ingrese numero entero positivos.");
                        system("pause");
                        system("cls");
                        break;
                    }
                    else
                    {

                        fac=factorial(x);
                        printf("\nEl Factorial es %d!=%d\n\n",x,fac);
                        system("pause");
                        system("cls");
                    }
                break;
            case 8:// TODAS LAS OPERACIONES
                if(band==1 || band2==1)
                {
                    printf("\nError. Valores en A o B vacios.\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    sum=suma(x,y);
                    res=resta(x,y);
                    divi=division(x,y);
                    multi=multiplicacion(x,y);
                    fac=factorial(x);

                    printf("\nLa suma de %d+%d=%d\n\n",x,y,sum);
                    printf("\nLa resta de %d-%d=%d\n\n",x,y,res);
                    printf("\nLa Division de %d/%d=%.2f\n",x,y,divi);
                    printf("\nLa multiplicacion de %dx%d=%d\n",x,y,multi);
                    printf("\nEl Factorial es %d!=%d\n\n",x,fac);
                    system("pause");
                    system("cls");
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    //return 0;
}}
