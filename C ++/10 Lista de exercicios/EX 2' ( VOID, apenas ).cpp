/* EX 2 em apenas função VOID */


#include<iostream>
#include<conio2.h>
#define t 10
void leitura();
void verifica();
float v[t];
using namespace std;
main()
{
      leitura();
      verifica();
      getch();
}
void leitura(){
          int i;
          for(i=0; i<t; i++)
          {
                   cout<<"\nDigite o "<<i+1<<"o. elemento: ";
                   cin>>v[i];
          }
          cout<<"\n\n";
}
void verifica(){
     int i, c=0;
     cout<<"Maiores de 50: ";
     for(i=0; i<t; i++)
     {
              if(v[i]>50)
              {
                         cout<<"\nNumero "<<v[i]<<" na posi\207\306o "<<i+1<<".";
                         c++;
              }
              if(c=0)
              {
                     cout<<"N\306o ha nr maior que 50.";
              }
     }
}
