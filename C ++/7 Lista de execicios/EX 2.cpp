/* Construa um algoritmo que leia um vetor V de 10 elementos e mostre o valor absoluto deste 
vetor. Dica: para cada valor negativo, multiplique-o por -1 para trocar seu sinal, transformando-
o em positivo. 
               Exemplos: |-2| = 2         |4| = 4 
*/

#include<iostream> 
#include<conio2.h> 
#define t 10
using namespace std;
main() 
{ 
       int i=0;
       float v[t];
       while (i<t) 
       {     
             cout<<"\n\n\nDigite um elemento: ";
             cin>>v[i];
             if (v[i]<0)
             {
                        v[i] *= -1;
             }
             cout<<"O valor absoluto \202: "<<v[i];
             i++;
       }
       getch() ;
}
       
