
int factorial(int a)
{
    int factor=1,rta;
    while(a>0)
   	{
      	factor=a*factor;
      	a--;
    }
    return factor;
    //printf("El factorias de %d!=%d",a,rta);
}

int suma(int a,int b)
{
    return (a+b);

}
int resta(int a,int b)
{
    return (a-b);
}
int multiplicacion(int a,int b)
{
    return (a*b);
}
float division(int a,int b)
{
    float rta;
    rta =(float)a/b;
    return rta;
}
int valrango(int a)
{
    if(a>0 && a<10)
        return 1;
}

