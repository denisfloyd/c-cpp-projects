//  EX String STRLEN

#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{
      char nome[60];
      int tamanho;
      cout<<"\nDigite o seu nome: ";
      gets(nome);
      tamanho = strlen(nome);
      cout<<"\n\nSeu nome tem "<<tamanho<<" caracteres.";
      getch();
}
