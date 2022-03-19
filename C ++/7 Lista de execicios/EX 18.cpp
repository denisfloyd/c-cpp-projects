/* Escreva um algoritmo que leia o vetor A, do tipo inteiro, com 10 elementos. 
A partir do vetor lido gere o vetor B de, 5 elementos, com a última 
metade do vetor A. Gere também o vetor C com a primeira metade do vetor A. 
Imprima os vetores B e C*/ 

#include<iostream>
#include<conio2.h> 
#define t 10
using namespace std;
main()
{
       int a[t],i;
       for(i=0;i<10;i++) 
       { 
                         cout<<"Digite o "<<i+1<<"o. elemento: ";
                         cin>>a[i];
                         cout<<"\n"; 
       }
       textbackground(11);
       clrscr();
       textcolor(RED);
       cout<<"\n\333\334\334\334 O VETOR B \334\334\334\333\n\n";
       for(i=5;i<10;i++)
       {
                        cout<<a[i]<<"\t";
       }
       cout<<"\n\n\n\n\n\n\n\n\333\334\334\334 O VETOR C \334\334\334\333\n\n";
       for(i=0;i<5;i++)
       {
                     cout<<a[i]<<"\t";
       }
       getch();
}  
