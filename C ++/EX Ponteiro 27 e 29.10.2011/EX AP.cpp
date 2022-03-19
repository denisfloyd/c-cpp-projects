#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      int tamanho, i, *pvetor;
      cout<<"\nDigite a qtd. de elementos: ";
      cin>>tamanho;
      pvetor = new int[tamanho];
      for(i=0; i<tamanho; i++)
      {
               cout<<"\n["<<i+1<<"]: ";
               cin>>pvetor[i];
      }
      
      //Operaçao de Incremento de Ponteiro
      
      clrscr();
      cout<<"\nOs valores Digitados: \n";
      cout<<"Opera\207\306o de Incremento: \n\n";
      for(i=0; i<tamanho; i++)
      {
               cout<<"\n["<<i+1<<"]: "<<*pvetor++;
      }
      
      //Operação de Decremento de Ponteiro
      
      cout<<"\n\nOs valores Digitados: \n";
      cout<<"Opera\207\306o de Decremento: \n\n";
      *pvetor--;
      for(i=tamanho-1; i>=0; i--)
      {
                        cout<<"\n["<<i+1<<"]: "<<*pvetor--;
      }
      getch();
}

      
