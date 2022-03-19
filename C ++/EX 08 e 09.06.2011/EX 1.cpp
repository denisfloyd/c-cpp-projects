/* Escreva um algoritmo que leia um vetor com o nome de 7 alunos. Leia outro ve-
   tor com a média final desses alunos . Calcule e mostre.
   a) O nome do aluno com maior média.
   b) Para cada aluno que ainda nào esteja aprovado, isto é, com média menor que
      mostrar quanto este aluno precisa tirar no exame p/ ser aprovado. Conside-
      rar que a média p/ aprovação no exame é:  exame = 10 - media_final
*/

#include<iostream> 
#include<conio2.h> 
#define t 7
using namespace std;
main()
{
      char n[t][50];
      char maior_nome[50];
      int i;
      float m[t], maior_m;
      for(i=0; i<t; i++) 
      {
               cout<<"\nDigite o "<<i+1<<"o. aluno: ";
               cin>>n[i];
               cout<<"\nDigite a nota de "<<n[i]<<": ";
               cin>>m[i];
      }
      cout<<"\n\n\n\nRelat\242rio dos alunos: \n";
      i=0;
      maior_m = m[i]; 
      strcpy(maior_nome, n[i]);
      for(i=0 ;i<t; i++)
      {
              if(m[i]<7.0)
              {
                          cout<<n[i]<<" Precisa de "<<10-m[i]<<" p/ aprov. no exame!\n";
              }
              if(m[i]>maior_m)
              {
                              maior_m = m[i];
                              strcpy(maior_nome, n[i]);
              }
      }
      cout<<"\n\nA maior m\202dia \202 de "<<maior_nome<<", "<<maior_m;
      getch();
}
