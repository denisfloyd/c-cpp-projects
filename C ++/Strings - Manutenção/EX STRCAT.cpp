//  EX String STRCAT

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      char s[100]="Sauda\207\345es, ";
      char nome[50];
      cout<<"\nDigite o seu nome: ";
      gets(nome);
      strcat(s,nome);
      cout<<"\n\n"<<s;
      getch();
}
