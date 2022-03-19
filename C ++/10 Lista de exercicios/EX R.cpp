/* Escreva Um algoritmo que leia um vetor de 10 elementos do tipo re4l. Calcule
e mostre:
  a) A 4a. potencia dos elementos >=10 e <=50
  b) Mostre a multiplicação pelo seu indice. */ 

#include<iostream>
#include<conio2.h>
#include<math.h> 
#define t 5
using namespace std;

void leitura ();
void imprimir ();
//int ver (float);
float a[t];

main() 
{
       leitura();
       imprimir();
       getch();
}

void leitura( )
{
     int ver (float);
     int i, c;
     for (i=0; i<t; i++)
     {
         cout<<"\nDigite o "<<i+1<<"o. elemento: ";
         cin>>a[i];
         c = ver(a[i]);
         if(c==1)
         {
                 cout<<"Elemento >= 10 e  <=50 a 4a. potencia: "<<pow(a[i], 4)<<endl;
         }
     }
     cout<<"\n\n\n";
}

int ver (float k)
{
    if (k >= 10 && k <=50)
          return 1;
    else 
         return 0; 
}

void imprimir()
{
     for(int i=0; i<t; i++)
     {
             cout<<"\nO Elemento "<<i+1<<" multiplicado com seu indice: "<<a[i] * i;
     }
}      
