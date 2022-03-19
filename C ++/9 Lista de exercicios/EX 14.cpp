/* A empresa A & B pretende perfurar um poço artesiano num terreno de 25 m2. 
   Para isso contratou uma pessoa que esquadrinhou o terreno e levantou as 
   propriedades orgânicas do solo com o objetivo de encontrar água potável. 
   Em cada um dos quadros existe um valor obtido a partir da análise 
   elaborada pelo perfurador. Escreva um programa que indique o melhor local 
   do terreno para perfurar o poço e encontrar água em abundância. 
   Para efeito dos cálculos, que indicará o melhor local para a perfuração,
   você deverá considerar: 
   - o valor da propriedade orgânica deve estar entre 50 e 95; E 
   - a raiz quadrada de cada propriedade orgânica não pode estar na faixa entre 9 e 10.
*/

#include<iostream>
#include<conio2.h> 
#include<math.h>
#define t 5 
using namespace std;
main()
{
      float a[t][t];
      int i, j, col, lin=3, c=0;
      textcolor(WHITE);
      cout<<"\tDigite as Propriedades Org\203nicas de cada M\375: ";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        gotoxy(col, lin);
                        cin>>a[i][j];
                        col +=5;
               }
               lin += 2;
      }
      lin = 3;
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        if(a[i][j]>50 && a[i][j]<95)
                        {
                                      if(sqrt(a[i][j])>10 || sqrt(a[i][j])<9)
                                      {
                                                          textcolor(LIGHTBLUE);
                                                          gotoxy(col, lin);
                                                          cout<<a[i][j];
                                                          col +=5;
                                                          c++;
                                      }
                                      else
                                      {
                                          textcolor(BROWN);
                                          gotoxy(col,lin);
                                          cout<<a[i][j];
                                          col +=5;
                                      }
                        }
                        else
                        {
                            textcolor(BROWN);
                            gotoxy(col,lin);
                            cout<<a[i][j];
                            col +=5;
                        }
               }
               lin += 2;
      }
      textcolor(BROWN);
      lin +=3;
      if (c==0)
      {
              cout<<"\n\n\n\tN\306o existe nenhuma area em abundancia de agua! ";
      }
      else
      {
          textcolor(LIGHTBLUE);
          cout<<"\n\n\n\tMelhores lugares para perfura\207\306o! ";
      }
      getch();
}
