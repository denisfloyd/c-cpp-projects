#include<iostream> 
#include<conio2.h>
#include<iomanip>
#define t 5
using namespace std;
main() 
{
       char nome[t][20], maior_nome[20], menor_nome[20];
       float sal[t], maior_sal, menor_sal;
       int i;
       for (i=0 ;i<t ;i++)
       {
           cout<<"\nDigite o "<<i+1<<"o. nome: ";
           cin>>nome[i];
           cout<<"Digite o sal\240rio de "<<nome[i]<<": ";
           cin>>sal[i];
       }
       cout<<"\n\nOs novos sal\240rios s\306o:\n\n ";
       for (i=0;i<t;i++)
       {
           sal[i] = sal[i] * 1.10;
           cout<<"\n"<<nome[i]<<" --> "<<sal[i]<<"\n";
       }
       maior_sal=sal[0];
       strcpy(maior_nome, nome[0]);
       menor_sal=sal[0];
       strcpy(menor_nome, nome[0]);
       for (i=1;i<t;i++) 
       {
           if(sal[i]>maior_sal)
           {
                               maior_sal = sal[i];
                               strcpy(maior_nome, nome[i]);
           }
           if(sal[i]<menor_sal) 
           {
                                menor_sal = sal[i];
                                strcpy(menor_nome, nome[i]);
           }
       }
       cout<<"\n\n\n\nO maior sal\240rio: "<<maior_sal;
       cout<<"\nFuncion\240rio com maior sal\240rio: "<<maior_nome;
       cout<<"\nMenor sal\240rio: "<<menor_sal;
       cout<<"\nFuncion\240rio com menor sal\240rio: "<<menor_nome;
       getch();
} 
                           
