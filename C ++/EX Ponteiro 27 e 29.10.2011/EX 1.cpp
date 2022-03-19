#include<iostream> 
#include<conio2.h>
using namespace std; 
main()
{
      int idade, *pidade = 0;
      cout<<"\nDigite a idade: ";
      cin>>idade;
      pidade = &idade;
      cout<<"\nO valor de idade = "<<idade<<" esta armazenado no endere\207o de memoria: "<<pidade;
      getch();
}
