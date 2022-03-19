/* EX 1 em apenas função VOID */

#include<iostream>
#include<conio2.h>
#include<math.h>
using namespace std;
#define t 8
int s=0, q=0, v[t], i=0;
void soma();
void cubo(float);
void verifica();
void leitura();
void resultado();
main()
{
      leitura();
      soma();
      verifica();
      resultado();
      getch();
}
void leitura()
{
     for(i=0; i<t; i++)
     {
              cout<<"\nDigite o elemento: ";
              cin>>v[i];
              cubo(v[i]);
     }
}
void soma(){
     for(i=0; i<t; i++)
     {
              if(v[i]>20 && v[i]<30)
              {
                s += v[i];
              }
     }
}
void cubo(float k){
      float a;
      if(k<10)
      {
              a = pow(k,3);
              cout<<"\nO elem. ao cubo \202: "<<a;
              cout<<"\n\n";
      }
}
void verifica(){
    for(i=0; i<t; i++)
    {
              if(v[i] < 0)
              {
                     q++;
              }
    }
}
void resultado()
{
     cout<<"\n\n\nA soma dos >=20 e <=30 \202: "<<s;
     cout<<"\nA qtd. de negativos \202: "<<q;
}
