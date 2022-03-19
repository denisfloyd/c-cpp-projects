//   Demostração do método de ordenação Bubble Sort

#include<iostream> 
#include<conio2.h> 
using namespace std;
#define t 5
main()
{
      int v[t], i, j, aux; 
      for(i=0; i<t; i++) 
      {
               cout<<"\nDigite o "<<i+1<<"o. elemento: ";
               cin>>v[i];
      }
      for(j=0; j<t; j++)
      {
            for(i=0; i<t-1; i++)
            {
                     if(v[i] > v[i+1])
                     {
                             aux = v[i+1];
                             v[i+1] = v[i];
                             v[i] = aux;
                     }
            }
      }
      cout<<"\n\n\n\t\t Novo Vetor Ordenado (Bubble Sort): \n\n\t\t";
      for(i=0; i<t; i++)
      {
               cout<<v[i]<<"\t";
      }
      getch();
}
