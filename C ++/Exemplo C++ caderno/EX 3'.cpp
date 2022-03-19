/*      C++ Exemplo 3' 
        Escreva um programa que leia as idades de 10 pessoas em mostre 
        as suas idades em dias.
*/ 

#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{
      int anos, cont = 1;
      while(cont <= 10)
      {
                 cout<<"\n\nDigite a sua idade: ";
                 cin>>anos;
                 cout<<"Sua idade em dias ----> "<<anos*365;
                 cont++;
      }
      getch();
}
      
