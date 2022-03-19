/*Escreva um programa que gere a seguinte estrutura para armazenar, num vetor, os dados 
de 20 pessoas: Idade (inteiro) e Salario (real). Calcule e mostre: 
1.  A média salarial das pessoas com idade maior que 50 anos. Se não existir nenhuma 
idade nesta condição, o algoritmo/programa, deverá informar o usuário; 
2.  A idade da pessoa com o maior salário;  
3.  A quantidade de salários entre R$500,00 e R$1000,00, inclusive os extremos. Se 
não existir nenhum salário nesta condição, o algoritmo/programa, deverá informar 
o usuário.*/

#include<iostream>
#include<conio2.h>
#define t 20    //Original t 20
using namespace std;
main()
{
      struct dados
      {
             int idade;
             float sal;
      };
      dados a[t];
      float s = 0, maior_s = 0;
      int c = 0, q = 0, maior_i;
      for(int i=0; i<t; i++)
      {
              cout<<"\n\nIdade : ";
              cin>>a[i].idade;
              cout<<"\nSalario: ";
              cin>>a[i].sal;
              if(a[i].sal > maior_s)
              {
                           maior_s = a[i].sal;
                           maior_i = a[i]. idade;
              }
              if(a[i].idade > 50)
              {
                            s += a[i].sal;
                            c++;
              }
              if(a[i].sal >= 500 && a[i].sal <= 1000)
              {
                          q++;
              }
      }
      clrscr();
      if(c==0)
      {
             cout<<"\nN\207o ha pessoas com mais de 50 anos de idade. ";
      }
      else
      {
          cout<<"\nA m\202dia salarial das pessoas com mais de 50 anos: "<<s/c;
      }
      cout<<"\nA pessoa com maior salario recebe "<<maior_s<<"R$ e tem "<<maior_i<<" anos de idade.";
      if(q==0)
      {
             cout<<"\nN\207 ha salarios entre 500 e 1000 reais.";
      }
      else
      {
          cout<<"\nA qtd. de salarios entre 500 e 1000 reais: "<<q;
      }
      getch();
} 
