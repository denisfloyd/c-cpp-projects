/*O Governo do estado de SP est� realizando pesquisa  para verificar a realidade 
socioecon�mica de 10 fam�lias paulistas. Construa um programa que gere uma estrutura 
com os seguintes membros: Cidade, Renda Familiar e Nr Pessoas. Calcule e mostre: 
a.  O n�mero m�dio de pessoas por fam�lia 
b.  A renda familiar m�dia; 
c.  Em qual fam�lia existe o maior nr de pessoas? 
d.  Em qual cidade existe a maior renda familiar? */

#define t 3
#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      int i,s1=0, maiorf=0;
      float maiors=0, s2=0;
      char cmnrp[20], nomemaiorsal[20];
      struct dados
      {
             char cidade[20];
             float sal;
             int nr_pessoas;
      };
      dados v[t];
      for(i=0; i<t; i++)
      {
               cout<<"\n\nCidade da familia: ";
               cin>>v[i].cidade;
               cout<<"\nRenda da familia: ";
               cin>>v[i].sal;
               cout<<"\nNr de pessoas na familia: ";
               cin>>v[i].nr_pessoas;
               s1 += v[i].nr_pessoas;
               if(v[i].nr_pessoas > maiorf)
               {
                                  maiorf = v[i].nr_pessoas;
                                  strcpy(cmnrp, v[i].cidade);
               }
               s2 += v[i].sal;
               if(v[i].sal > maiors)
               {
                           maiors = v[i].sal;
                           strcpy(nomemaiorsal, v[i].cidade);
               }
      }
      clrscr();
      cout<<"\nO nr medio de pessoas por familia: "<<s1/t;
      cout<<"\nRenda familiar media: "<<s2/t;
      cout<<"\nA familia de "<<cmnrp<<" possui o maior nr de pessoas: "<<maiorf;
      cout<<endl<<nomemaiorsal<<" possui a maior renda familiar: "<<maiors;
      getch();
}
