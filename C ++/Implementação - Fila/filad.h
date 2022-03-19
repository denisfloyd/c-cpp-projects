#include<iostream>
#include<conio2.h>
#define t 10
using namespace std;

int inicio, fim;
int f[t];

void iniciar()
{
     inicio = 0;
     fim = -1;
}

void inserir()
{
     int valor;
     cout<<"\nDigite o valor: ";
     cin>>valor;
     if(fim < t-1)
     {
            fim++;
            f[fim] = valor;
     }
     else
     {
         cout<<"\n\n\t\tFILA CHEIA ";
     }      
}

void remover() 
{
     void iniciar();
     if(inicio > fim)
     {
               cout<<"\n\n\t\tFILA VAZIA";
     }
     else
     {
         inicio++;
         if(inicio > fim)
         {
                   iniciar();
         }
     }
}

void consultar()
{
     if(inicio > fim)
     {
               cout<<"\n\n\t\tLISTA VAZIA";
     }
     else
     {
         cout<<"\n\nTopo (inicio) da fila: "<<f[inicio];
     }
}
