#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int x=0,y=0;

    while(seguir=='s')
    {
        system("cls");


        switch(menu())
        {

            case 1:
                printf("\n x= ");
                scanf("%d",&x);
                break;
            case 2:
                printf("\n y= ");
                scanf("%d",&y);
                break;
            case 3:
                suma(x,y);
                system("pause");
                break;
            case 4:
                resta(x,y);
                system("pause");
                break;
            case 5:
                division(x,y);
                system("pause");
                break;
            case 6:
                multiplicacion(x,y);
                system("pause");
                break;
            case 7:
                factorial(x);
               system("pause");
                break;
            case 8:
                suma(x,y);
                resta(x,y);
                multiplicacion(x,y);
                division(x,y);
                factorial(x);
                printf("\n\n");
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
