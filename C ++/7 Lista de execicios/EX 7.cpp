/* Escreva um algoritmo que calcule e mostre o somat�rio dos  �mpares de um 
vetor M de 6 elementos inteiros.  */

#define m 6
#include<iostream> 
#include<conio2.h> 
#include<math.h>
using namespace std;
main()
{ 
      float s=0;
      int i=0,v[m];
      while (i<m) 
      {
            cout<<"\nDigite o "<<i+1<<"o. elemento: ";
            cin>>v[m];
            if (v[m] % 2 == 1) 
            { 
                        s += v[m];
            }
            i++;
      }
      cout<<"\n\n\nA soma dos \241mpares \202: "<<s;
      getch();
} 
        
