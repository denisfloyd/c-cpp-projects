/* Fa�a um algoritmo que leia um vetor de 10 posi��es e mostre quantos elementos 
s�o maiores que seus respectivos �ndices. 
*/ 

#include<iostream> 
#include<conio2.h> 
#define t 10 
using namespace std;
main()
{ 
      int v[t],i=0,q=0;
      while (i<t)
      {
            cout<<"\n\nDigite um elemento: ";
            cin>>v[i];
            i++;
      }
      i=0;
      while (i<t)
      {
            if(v[i]>i)
            {
                   q++; 
            }
            i++; 
      }
      cout<<"\n\n\nA Quantidade de elementos maiores que seus respectivos \241ndices \202: "<<q;
      getch(); 
} 
                        
