/* Fa�a um algoritmo que leia um vetor de 20 posi��es (a partir do �ndice 0) e imprima-o na 
ordem inversa (do 19� at� o 0� elemento).
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
       
