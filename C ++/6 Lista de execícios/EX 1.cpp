/* A prefeitura de Oiapoque fez uma pesquisa entre seus habitantes, coletando dados 
sobre o salário e o número de filhos. O objetivo da pesquisa é levantar: 
      a)  A média de salário da população; 
      b)  A média do número de filhos da população; 
      c)  O maior salário; 
      d)  O menor salário. 
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
