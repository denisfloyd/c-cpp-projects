/* Escreva um algoritmo que defina um vetor de 11 elementos, do tipo real. O
   algoritmo deverá ler os 10 primeiros elementos (da posição 0 até à 9) do re-
   ferido vetor. A 10a. posição do vetor deverá armazenar a multiplicação entre
   todos os elementos maiores que 10. Mostre o resultado desta operação.
*/

#include<iostream> 
#include<conio2.h> 
#define t 11
using namespace std;
main()
{
      int i;
      float v[t];
      v[10] = 1;
      for(i=0; i<t-1;i++)
      {
               cout<<"\nDigite o "<<i+1<<"o. elemento: ";
               cin>>v[i];
               if (v[i]>10)
               {
                           v[10] = v[10] * v[i];
               }
      }
      textbackground(WHITE);
      clrscr();
      textcolor(BLACK);
      if(v[10] == 1)
      {
               cout<<"\n\tN\306o ha nr maior que 10.";
      }
      else
      {
          cout<<"\n\nA multiplica\207\306o \202: "<<v[10];
      }
      getch();
}
     
