/* Escreva um algoritmo que leia um vetor de 8 elementos, real, calcule e 
   mostre: 
   a)A soma entre os elementos maiores que 20 e menores que 30; 
   b)A quantidade de números negativos; 
   c)O cubo de cada elemento menor que 10.
*/

#include<iostream>
#include<conio2.h>
#include<math.h> 
#define t 8
void imprime(float, int);
int negativo(float);
void cubo(float);
void inicio();
using namespace std;
main()
{
      inicio();
      getch();
}
void inicio(){
     int c=0, v, i;
     float a[t], s=0;
     for(i=0; i<t; i++)
     {
              cout<<"\n["<<i+1<<"]: ";
              cin>>a[i];
              if(a[i] > 20 && a[i] < 50) 
              {
                      s += a[i];
              }
              v=negativo(a[i]);
              if(v==1)
              {
                      c++;
              }
              cubo(a[i]);
     }
     imprime(s,c);
}
int negativo(float k)
{
    if(k<0)
    {
           return 1;
    }
    else
    {
        return 0;
    }
}
void imprime(float j, int u)
{
     cout<<"\n\nA soma dos maiores de 20 e menores de 50 \202: "<<j;
     cout<<"\nA quantidade de negativos: "<<u;
}
void cubo(float h)
{
     if(h<10)
     {
             cout<<"\nO cubo do nr \202: "<<pow(h,3)<<endl;
             
     }
}

      
