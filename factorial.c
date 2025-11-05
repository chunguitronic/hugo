#include <stdio.h>
int factorial(int n)
{
    int aux;
    if(n==1) aux=1;
    for(i=1;i<=n;i++) aux=aux*i;
    return aux;

}

void main(){
    int n;
    printf("factorial de )
