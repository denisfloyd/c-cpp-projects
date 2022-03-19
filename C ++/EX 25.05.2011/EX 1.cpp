#include<iostream>
#include<conio2.h>
#define t 5
#include<iomanip>
using namespace std;
main()
{
      char p[t][20], maior_nome[20], menor_nome[20];
      int q[t], s=0, i, menor, maior;
      for( i=0; i<5; i++)
      {
           cout<<"\nNome do produto "<<i+1<<": ";
           cin>>p[i];
           cout<<"\nQtd. vendida do produto de "<<p[i]<<": ";
           cin>>q[i];
           s += q[i];
      }
      maior = q[0]; 
      strcpy (maior_nome, p[i]);
      for (i=1; i<t; i++)
      {
          if (q[i]>maior)
          {
                         maior = q[i];
                         strcpy(maior_nome, p[i]);
          }
      }
      menor =q[0];
      strcpy(menor_nome, p[0]);
      for(i=0;i<t;i++)
      {
                      if(q[i]<menor)
                      {
                                    menor = q[i];
                                    strcpy(menor_nome,p[i]);
                      }
      }
      cout<<"\n\n\n\nA menor qtd. vendida foi de "<<menor_nome<<" com "<<menor<<" unid.";
      cout<<"\nA m\202dia entre os produtos comercializados: "<<s/t;
      cout<<"\nA maior qtd. vendida foi de "<<maior_nome<<" com "<<maior<<" unid.";
      getch();
}
