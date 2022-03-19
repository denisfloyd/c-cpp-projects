#include<iostream>
#include<conio2.h>
#include<listad.h>
using namespace std;
main()
{
      int sair=1;
      char opcao;
      while(sair != 0 )
      {
                 cout<<"\t\t<<<<<<<<<  LISTA  >>>>>>>>>";
                 cout<<"\n\n1 - INSERIR NOVO N\340 NO FIM DA LISTA.";
                 cout<<"\n\n2 - INSERIR NOVO N\340 NO INICIO DA LISTA.";
                 cout<<"\n\n3 - INSERIR NOVO N\340 NA POSI\200\307O K.";
                 cout<<"\n\n4 - PROCURAR UM VALOR NA LISTA.";
                 cout<<"\n\n5 - REMOVER UM N\340 NO FIM DA LISTA.";
                 cout<<"\n\n6 - IMPRIMIR LISTA.";
                 cout<<"\n\n7 - PROCURAR UM N\340 E ALTERAR SEU CONTEUDO.";
                 cout<<"\n\n8 - DIVIDIR A LISTA EM DUAS.(*)";
                 cout<<"\n\n9 - REMOVER UM N\340 NO INICIO DA LISTA.";
                 cout<<"\n\na - BUSCA ALEATORIA DE CODIGO.";
                 cout<<"\n\n0 - SAIR.";
                 cout<<"\n\nSelecione a op\207\306o: ";
                 opcao = getche();
                 clrscr();
                 switch (opcao)
                 {
                        case'1':
                        {
                                lls_1();
                                break;
                        }
                        case'2': 
                        {
                                 lls_2();
                                 break;
                        }
                        case'3': 
                        {
                                 lls_3();
                                 break;
                        }
                        case'4': 
                        {
                                 lls_4();
                                 break;
                        }
                        case'5':
                        {
                                lls_5();
                                break;
                        }                
                        case'6':
                        {
                                lls_6();
                                break; 
                        }            
                        case'7': 
                        {
                                 lls_7();
                                 break;
                        }
                        case'8':
                        {
                                lls_8();
                                break;
                        }
                        case'9': 
                        {
                                 lls_9();
                                 break;
                        }
                        case'0':
                        {
                               sair = 0;
                               break;
                        }
                        case'a':
                        {
                                lls_a();
                                break;
                        }
                 }
      getch();
      clrscr();
      }
}
                 
                 
