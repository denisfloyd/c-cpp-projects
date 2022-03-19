/* Faça um algoritmo que leia um vetor de 20 posições (a partir do índice 0) e imprima-o na 
ordem inversa (do 19º até o 0º elemento).
*/

#define t 20
#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{ 
      float v[t]; 
      int i=0;
      while (i<t) 
      { 
            cout<<"\nDigite um elemento: ";
            cin>>v[i];
            i++;
      }
      cout<<"\n\n\n\n\n"; 
      i=19;
      while (i>=0)
      { 
            cout<<"\nO elemento v[ "<<i<<"] \202: "<<v[i];
            i--;
      }
      getch(); 
} 
       
