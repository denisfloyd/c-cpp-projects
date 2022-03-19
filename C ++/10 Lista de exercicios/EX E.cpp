/* Escreva um algoritmo que leia um vetor de 10 elementos, do tipo inteiro, 
   calcule e mostre: 
   a) O nrs. pares e sua quantidade; 
   b) Os nrs. divisiveis por 3 e a média entre eles.
*/

#include<iostream>
#include<conio2.h> 
#define t 10
int v[t];
using namespace std;
void leitura();
void pares();
void tres();
main()
{
      leitura();
      pares();
      tres();
      getch();
}

void leitura()
{
     for(int i=0; i<t; i++)
     {
             cout<<"\nDigite o "<<i+1<<"o. elemento: ";
             cin>>v[i];
     }
     cout<<"\n\n";
}
void pares()
{
     int q=0;
     for(int i=0; i<t; i++)
     {
             if(v[i] % 2 ==0)
             {
                     cout<<v[i]<<" \202 PAR"<<endl;
                     q++;
             }
     }
     cout<<"\n\nA qtd. de pares \202: "<<q<<"\n\n";
}
void tres() 
{
     int q=0, i, s=0;
     for(int i=0; i<t; i++)
     {
             if(v[i] % 3 ==0)
             {
                     cout<<v[i]<<" \202 div. por 3"<<endl;
                     q++; s += v[i];
             }
     }
     cout<<"\n\nA m\202dia entre os div. por 3: "<<s/q;
}
      
