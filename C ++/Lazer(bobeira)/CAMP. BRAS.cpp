#include<iostream>
#include<conio2.h> 
#define t 38
using namespace std;
main()
{
      char p[40];
      char v[t];
      int i=0, c=0;
      while(i<1)
      {
       cout<<"Tabela de jogos do seu TIME. \n";
       cout<<"Digite o nome do seu time: ";
       cin>>p;
       i++;
      }
      cout<<"\n\n";
      for (i=0; i<t; i++)
      {
          cout<<"\nDigite (v-Vitoria, e-Empate, d-Derrota): "<<i+1;
          cin>>v[i];
          if (v[i] =='v')
          {
                  c += 3;
          }
          if(v[i] == 'e')
          {
                   c++;
          }
      } 
      cout<<"\n\n\n"<<p<<" terminou o campeonato com "<<c<<" pontos.";
      getch();
}
