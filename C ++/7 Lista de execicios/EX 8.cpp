/* Escreva um algoritmo que leia um vetor de 30 elementos do tipo inteiro e: 
a) Mostre a quantidade de elementos divis�veis por 5; 
b) Mostre em quais posi��es os elementos �mpares est�o armazenados.
*/

#include<iostream>
#include<conio2.h> 
#define t 5
using namespace std;
main()
{ 
      int v[t],i=0,q=0;
      while(i<t)
      { 
                cout<<"\n\nDigite um elemento: ";
                cin>>v[i];
                if (v[i]%5==0)
                { 
                     q++;
                }
                i++;
      }
      i=0; 
      while (i<t)
      { 
            if (v[i]%2==1)
            { 
               cout<<"\nO elemento v["<<i+1<<"] \202 \241mpar.";
            } 
            i++;
      }
      cout<<"\n\nA qtd. de numeros d\241visiveis por 5 \202: "<<q;
      getch() ;
}            
