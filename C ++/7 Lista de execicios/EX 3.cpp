/* Faça um algoritmo que calcule e mostre a quantidade de elementos positivos e negativos do 
vetor W de 15 elementos reais. */
 
#include<iostream> 
#include<conio2.h> 
#define t 15
using namespace std;
main() 
{ 
       float w[t];
       int i=0,ci=0,cp=0;
       textbackground(WHITE);
       system("cls");
       textcolor(BLACK);                                                                  
       while(i<t) 
       {
                  cout<<"\nDigite um elemento: ";
                  cin>>w[i];
                  if (w[i]<0)
                  { 
                             ci++;
                  }
                  else
                  {
                      cp++;
                  }
                  i++;
       }
       cout<<"\n\n\nA Quantidade de elemnetos negativos \202: "<<ci;
       cout<<"\nA Quantidade de positivos \202: "<<cp;
       getch();
} 
       
