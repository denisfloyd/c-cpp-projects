/* Escreva um algoritmo que leia um vetor de 10 elementos, do tipo inteiro. Calcule e mostre 
os números superiores a 50 e suas respectivas posições. Mostrar mensagem se não existir 
nenhum número nessa condição.
*/

#include<iostream> 
#include<conio2.h> 
#define t 10
using namespace std;
main()
{
      int i=0, q=0,v[t];
      while (i<t)
      { 
            cout<<"\nDigite o "<<i+1<<"o. elemento: ";
            cin>>v[i];
            i++;
      } 
      cout<<"\n\n\n\n\n";
      for(i=0;i<t;i++)
      {   
          if (v[i]>50) 
          { 
                       cout<<"\nO elemento v["<<i<<"] \202 "<<v[i]<<" ent\306o \202 maior que 50.";
                       q++;
          }
      }
      if(q==0)
      { 
                 cout<<"N\306o tem elemento maior que 50.";
      }
      getch();
}
                    
