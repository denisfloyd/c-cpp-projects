/* 1.  Faça um programa que crie a seguinte estrutura para 50 funcionários da empresa 
ABC: codigo, nome, salario e nrfilhos. Armazene a estrutura num vetor. Calcule e mostre: 
a.  A media salarial da empresa; 
b.  O nome do funcionário com o maior salário (mostre nome e salário); 
c.  O nome do funcionário com o maior nr de filhos (mostre nome e nr de filhos); 
d.  A média do nr de filhos entre todos os funcionários. */

#include<iostream>
#include<conio2.h> 
#define t 3 
using namespace std;
main()
{
      struct func
      {
             int cod;
             char nome[10];
             float sal;
             int f;
      };
      func v[t];
      int i, maior_f=0;
      float s1=0, s2=0, maior_s=0;
      char nome_maior[10], nmf[10];
      for(i=0; i<t; i++)
      {
               cout<<"\nCodigo: ";
               cin>>v[i].cod;
               cout<<"\nNome: ";
               cin>>v[i].nome;
               cout<<"\nSalario de "<<v[i].nome<<": ";
               cin>>v[i].sal;
               cout<<"\nNr de filhos de "<<v[i].nome<<": ";
               cin>>v[i].f;
               s1 += v[i].sal;
               s2 += v[i].f;
               if(v[i].sal>maior_s)
               {
                                maior_s = v[i].sal;
                                strcpy(nome_maior,v[i].nome);
               }
               if(v[i].f > maior_f)
               {
                         maior_f = v[i].f;
                         strcpy(nmf, v[i].nome);
               }
      }
      cout<<"\n\n\nA m\202dia salarial: "<<s1/t;
      cout<<endl<<nome_maior<<" possui o maior salario: "<<maior_s;
      cout<<endl<<nmf<<" possui o maior nr de filhos: "<<maior_f;
      cout<<"\nA m\202dia do nr de filhos: "<<s2/t;
      getch();
}
