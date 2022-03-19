/* Escreva um algoritmo que leia o vetor de A de 5  elementos reais e o vetor B, do mesmo 
tamanho. A seguir gere o vetor C como sendo a soma dos vetores A e B. Mostre C. 
*/ 

#include<iostream> 
#include<conio2.h> 
#define t 5
using namespace std;
main()
{ 
      float a[t], b[t], c[t];
      int i=0;
      while(i<t)
      { 
                cout<<"\n\n\nDigite o elemento A: ";
                cin>>a[i];
                cout<<"\nDigite o elemento B: ";
                cin>>b[i];
                c[i] = a[i]+b[i];
                cout<<"\n\nA soma dos elementos \202: "<<c[i];
                i++;
      }
      getch();
}  

