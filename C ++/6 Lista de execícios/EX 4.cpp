/* Faça um algoritmo que leia a idade e o sexo de várias crianças. A seguir calcule e 
mostre a quantidade de meninas com idade entre 6 e 10 anos. Finalize o algoritmo 
quando idade for igual a -1. */

#include<iostream> 
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
      int cont=0, idade;
      char sexo;
      cout<<"\nDigite a sua idade: ";
      cin>>idade;
      while (idade !=-1)
      {
            cout<<"\nDigite o seu sexo (m=masculino) / (f=feminino): ";
            sexo=getche();
            if (sexo=='f' && idade>6 && idade<10) 
            {
                         cont++;
            }
            cout<<"\n\nDigite a sua idade: ";
            cin>>idade;
      }
      cout<<"\n\n\nPessoas com sexo feminino entre 6 e 10 anos: "<<cont;
      getch() ;
}
