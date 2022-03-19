#include<iostream> 
#include<conio2.h>
#include<filad.h> 
using namespace std;
main()
{
      int sair=1;
      char opcao;
      iniciar();
      while(sair != 0)
      {
                 cout<<"\t\t<<<<<<<<<<<<  FILA  >>>>>>>>>>>>>";
                 cout<<"\n\n\n\n1 - Inserir.";
                 cout<<"\n\n2 - Remover.";
                 cout<<"\n\n3 - Consultar.";
                 cout<<"\n\n4 - Sair.";
                 cout<<"\n\nSelecione a op\207\306o: ";
                 opcao = getche();
                 clrscr();
                 switch(opcao)
                 {
                         case'1':
                         {
                                 inserir();
                                 break;
                         }
                         case'2':
                         {
                                 remover();
                                 break;
                         }
                         case'3':
                         {
                                 consultar();
                                 break;
                         }
                         case'4':
                         {
                                 sair=0;
                                 break;
                         }
                 }
      getch();
      system("cls");
      }
}

                                      
