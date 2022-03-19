/* Faça um algoritmo que: 
a) Leia um número N; 
b) Leia um vetor VET de 10 posições do tipo real; 
c) Multiplique cada elemento de VET por N e atualize VET; 
d) Mostre o novo VET. 
*/ 

#define t 10
#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{ 
      float v[t];      
      int i=0,n;
      cout<<"Digite o valor de N: ";
      cin>>n;
      while (i<t)
      {
            cout<<"\n\n\nDigite um elemento: ";
            cin>>v[i];
            v[i] *= n;
            cout<<"\nO novo valor de VET \202: "<<v[i];
            i++;
      }
      getch();
} 
