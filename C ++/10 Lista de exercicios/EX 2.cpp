/* Escreva um algoritmo que leia um vetor de 10 elementos, do tipo inteiro. 
   Calcule e mostre os números superiores a 50 e suas respectivas posições. 
   Mostrar mensagem se não existir nenhum número nessa condição.
*/

#include<iostream>
#include<conio2.h>
using namespace std;
void funcao();
int teste (int, int);
#define t 10
main()
{
      funcao();
      getch();
}
void funcao()
{
     int v[t], i, x=0;
     for(i=0; i<t; i++)
     {
              cout<<"\n["<<i+1<<"]: ";
              cin>>v[i];
              x = x + teste(v[i], i);
     }
     if(x==0)
     {
             cout<<"\n\nN\306o foram lidos maiores de 50. ";
     }
}
int teste(int k, int l)
{
    if(k>50)
    {
            cout<<"\nElemento maior de 50 na posi\207\306o "<<l+1<<endl;
            return 1;
    }
}
