#include<iostream>
#include<conio2.h> 
#include<listaligadad.h>
using namespace std;
main()
{
      int sair = 1;
      char opcao;
      do
      {
             cout<<"\t\t\005\005\005 LISTA LINEAR LIGADA \005\005\005";
             cout<<"\n\n1 - INSERIR PRIMEIRO N\242";
             cout<<"\n\n2 - INSERIR NOVO N\340 NO INICIO";
             cout<<"\n\n3 - INSERIR NOVO N\340 NO FIM";
             cout<<"\n\n4 - IMPRIMIR LISTA";
             cout<<"\n\n5 - REMOVER O N\340 NO FIM DA LISTA";
             cout<<"\n\n0 - SAIR";
             cout<<"\n\nSelecione o op\207\307o: ";
             opcao = getche();
             clrscr();
             switch(opcao)
             {
                     case'1':
                     {
                             lll_1();
                             break;
                     }
                     case'2':
                     {
                             lll_2();
                             break;
                     }
                     case'3':
                     {
                             lll_3();
                             break;
                     }
                     case'4':
                     {
                             lll_4();
                             break;
                     }
                     case'5': 
                     {
                             lll_5();
                             break;
                     }
                     case'0':
                     {
                             sair = 0;
                             break;
                     }
             }
      getch();
      clrscr();
      } while(sair != 0);
}
