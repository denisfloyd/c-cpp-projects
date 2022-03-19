//  EX Senha Própria - String STRCMP

#include<iostream>
#include<conio2.h>
#include<stdlib.h>
using namespace std;
main()
{
      char resposta[] = "1234";
      char resp[10];
      cout<<"\nDigite a senha !: ";
      cin>>resp;      
      while (strcmp(resp,resposta)!=0)
      {
            cout<<"\nSenha Invalida, tente novamente: ";
            cout<<"\n\nDigite a senha !: ";
            cin>>resp;
      }
      cout<<"\n\nSenha Correta !!";
      getch();
}
