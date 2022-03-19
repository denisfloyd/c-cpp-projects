#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{
      char resposta [] = "palmas";
      char resposta1 [] = "maceio";
      char resposta2 [] = "manaus";
      char resposta3 [] = "sao luis";
      char resposta4 [] = "salvador";
      char resposta5 [] = "curitiba";
      char resposta6 [] = "natal";
      char resposta7 [] = "porto alegre";
      char resp [40];
      cout<<"\nQual \202 a capital de Tocantins: ";
      gets (resp); 
      while (strcmp(resp,resposta)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital de Tocantins: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual \202 a capital de Alagoas: ";
      gets(resp);
      while (strcmp(resp,resposta1)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital de Alagoas: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual \202 a capital de Amazonas: ";
      gets(resp);
      while (strcmp(resp,resposta2)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital de Amazonas: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual \202 a capital de Maranh\306o: ";
      gets(resp);
      while (strcmp(resp,resposta3)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital de Maranh\306o: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual é a capital da Bahia: ";
      gets(resp);
      while (strcmp(resp,resposta4)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital da Bahia: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual \202 a capital do Paran\240: ";
      gets(resp);
      while (strcmp(resp,resposta5)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital do Paran\240: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual \202 a capital do Rio Grande do Norte: ";
      gets(resp);
      while (strcmp(resp,resposta6)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital do Rio Grande do Norte: ";
            gets(resp);
      }
      clrscr();
      cout<<"\nQual \202 a capital do Rio Grande do Sul: ";
      gets(resp);
      while (strcmp(resp,resposta7)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a capital do Rio Grande do Sul: ";
            gets(resp);
      }
      clrscr();
      cout<<"\n\n\nParabens, voc\210 terminou !!!!";
      getch();
}
 
      
