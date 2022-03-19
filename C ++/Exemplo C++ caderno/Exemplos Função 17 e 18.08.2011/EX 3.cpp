/* Escreva um programa que leia um vetor de 5 elementos do tipo real. Calcule
   e mostre, utilizando recursos de funcao, o somatoria do vetor.
*/

#include<iostream> 
#include<conio2.h> 
using namespace std;
void leitura();
#define t 5     
main()
{     
      leitura();
      getch();
}

void leitura()
{
     float a[t], s=0;
     int i;
     for(i=0; i<t; i++)
     {
              cout<<"["<<i+1<<"]: ";
              cin>>a[i];
              s += a[i];
     }
     cout<<"\nO somatorio do vetor: "<<s;
}

      
