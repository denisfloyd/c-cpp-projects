/* A prefeitura de Oiapoque fez uma pesquisa entre seus habitantes, coletando dados 
sobre o sal�rio e o n�mero de filhos. O objetivo da pesquisa � levantar: 
      a)  A m�dia de sal�rio da popula��o; 
      b)  A m�dia do n�mero de filhos da popula��o; 
      c)  O maior sal�rio; 
      d)  O menor sal�rio. 
*/

#include<iostream> 
#include<iomanip>
#include<conio2.h>
using namespace std;
main() 
{ 
       int cont=0;
       float menor, maior, sal, f, sf=0, msal=0;
       textbackground(BLUE);
       clrscr();
       textcolor(WHITE);
       cout<<"\nDigite o seu sal\240rio: ";
       cin>>sal;
       maior = sal;
       menor = sal;
       while (sal>=0)
       {
             cout<<"\nDigite o nr de filhos: ";
             cin>>f;
             sf +=f;
             msal += sal;
             cont++;
             if (sal>maior)
             {
                           maior = sal;
             }
             else 
             {
                  if (sal<menor)
                  {
                                menor = sal;
                  }
             }
             cout<<"\n\n\nDigite o seu sal\240rio: ";
             cin>>sal;
       }
       cout<<"\n\n\n\nA m\202dia entre os sal\240rios \202: "<<msal/cont;            
       cout<<"\nA m\202dia do nr de filhos \202: "<<sf/cont;
       cout<<"\nO maior sal\240rio \202: "<<maior;
       cout<<"\nO menor sal\240rio \202: "<<menor;
       getch();
}
