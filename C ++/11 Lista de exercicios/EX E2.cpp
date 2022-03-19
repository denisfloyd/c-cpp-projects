#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      struct aluno
      {
             int mat;
             char nome[10];
             float nota[3]; 
             float media; 
      };
      int i, j;
      float s;
      aluno dados_aluno;
      for (i=0; i< 3; i++)
      {
          cout<<"\nNr. da Matricula: ";
          cin>>dados_aluno.mat;
          cout<<"\nNome: ";
          cin>>dados_aluno.nome;
          s=0;
          for(j=0; j<3; j++)
          {
               cout<<"\nDigite a "<<j+1<<"a. nota: ";
               cin>>dados_aluno.nota[j];
               s += dados_aluno.nota[j];
          }
      dados_aluno.media = s/3;
      cout<<"\n\n\tA m\202dia \202: "<<dados_aluno.media;
      cout<<"\n\n";
      }
      getch();
}
