#include<iostream>
#include<conio2.h>
#include<denis.h>
#include<math.h>
using namespace std;
main()
{
      char opcao;
      int sair=1,j;
      while(sair!=0)
      {
             clrscr();
             textbackground(WHITE);
             clrscr();
             textcolor(BLACK);
             cout<<"\n========================";
             cout<<" EMPRESA A & B ==========================";
             cout<<"\n\n\nEscolha uma op\207\306o\n\n";
             cout<<"1 - Po\207o Artesiano \n\n";
             cout<<"2 - Estoque \n\n";
             cout<<"3 - Vendas \n\n";
             cout<<"4 - Sair ";
             autor();
             cout<<"\n\nOp\207\306o: ";
             opcao=getche();
             system("cls");
             switch (opcao)
             {
                   case'1':
                   {
                           cout<<"\tDigite as Propriedades Org\203nicas de cada M\375: ";
                           #define t 5
                           int i, j, col, lin=3, c=0;
                           float a[t][t];
                           for(i=0; i<t; i++)
                           {
                                    col =10;
                                    for(j=0; j<t; j++)
                                    {
                                             gotoxy(col,lin);
                                             cin>>a[i][j];
                                             gotoxy(col, lin);
                                             c = c + verifica_terr(a[i][j]);
                                             col +=5;
                                    }
                                    lin += 3;
                           }
                           lin += 3;
                           impressao(c);        
                           break;              
                   }
                   case'2':
                   {
                          cabecalho();
                          leitura_2();
                          media_2();
                          valor();
                          break;
                   }
                   case'3': 
                   {
                            matriz_3();
                            break;
                   }
                   
                   case'4':
                   {
                            sair = 0;
                            break;
                   }
             }
             getch();
             system("cls");
      }
}

                           
                            
                     
