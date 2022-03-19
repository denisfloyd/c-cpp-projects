/*Escreva um programa que gere a seguinte estrutura para armazenar, num vetor, os 
dados de 20 pessoas: 
Codigo inteiro 
Nome caractere 
Idade inteiro 
Calcule e mostre: 
a.  A média das idades; 
b.  O nome da pessoa mais velha; 
c.  A quantidade de pessoas com idade >= 20 e <=30 anos. Se não existir nenhuma pessoa 
nesta situação, o algoritmo/programa, deverá informar o usuário.*/

#include<iostream>
#include<conio2.h>
using namespace std;
#define t 20
main()
{
      struct dados
      {
             char nome[15];
             int idade;
             int cod;
      };
      dados v[t];
      int i, q=0, s=0, maiori=0;
      char nome_maioridade[15];
      for(i=0; i<t; i++)
      {
               cout<<"\nCodigo: ";
               cin>>v[i].cod;
               cout<<"\nNome: ";
               cin>>v[i].nome;
               cout<<"\nIdade: ";
               cin>>v[i].idade;
               s += v[i].idade;
               if(v[i].idade > maiori)
               {
                             maiori = v[i].idade;
                             strcpy(nome_maioridade, v[i].nome);
               }
               if(v[i].idade>=20 && v[i].idade<=30)
               {
                                 q++;
               }
      }
      cout<<"\n\n\nA m\202dia das idades: "<<s/t;
      cout<<endl<<nome_maioridade<<" \202 a pessoa mais velha com "<<maiori<<" anos.";
      if(q>0)
      {
             cout<<"\nQtd. de pessoas entre 20 e 30 anos "<<q;
      }
      else
      {
          cout<<"\nN\207o ha pessoas entre 20 e 30 anos !";
      }
      getch();
}
