/* A empresa ABC guarda em seus registros a quantidade de  produtos produzidos
   por cada uma de suas 2 filiais, no 1o. semestre de um ano. Escreva um algo-
   ritmo que calcule e mostre: 
   a) Em qual mês a filial 1 mais produziu? Mostre o nr. do mês.
   b) Qual foi  mês que a filial 2 menos produziu. 
   c) Qual foi a média produzida na 1a. metade do semestre, pela filial 2.
*/

#include<iostream>
#include<conio2.h>
#define t 6
using namespace std;
main()
{
      int c=1, q=1, i;
      float a[t], b[t], s=0, menor, maior;
      for(i=0; i<t; i++) 
      {
               cout<<"\nFILIAL 1 - Digite a qtd. produzida no m\210s "<<i+1<<": ";
               cin>>a[i];
      }
      cout<<"\n\n\n";
      for(i=0; i<t; i++) 
      {
               cout<<"\nFILIAL 2 - Digite a qtd. produzida no m\210s "<<i+1<<": ";
               cin>>b[i];
      }
      for(i=0; i<3; i++) 
      {
             s += b[i];
      }
      maior = a[0];
      menor = b[0];
      for (i=1; i<t; i++)
      {
          if (a[i]>maior)
          {
                         maior = a[i];
                         c = i+1;
          }
          if (b[i]<menor)
          {
                         menor = b[i];
                         q = i+1;
          }
      }
      textbackground(WHITE);
      clrscr();
      textcolor(BLACK);
      cout<<"\nA Filial 1 mais produziu no m\210s "<<c<<" com "<<maior<<" unid.";
      cout<<"\n\nA Filial 2 menos produziu no m\210s "<<q<<" com "<<menor<<" unid.";
      cout<<"\nA m\202dia no 1a. metade na Filial 2 foi de "<<s/3<<" unidades.";
      getch();
}
 
          
      
        
