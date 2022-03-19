/*Um material radioativo perde metade de sua massa a cada 50 segundos. A partir da massa 
inicial de 4850g, construir um programa que determine o tempo necessário para que essa massa 
se torne menor do que 0.5g. Mostre a massa inicial, a massa final e o tempo. */

#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{
      float mr=4850, s;
      int cont=0;
      cout<<"A massa inicial \202 "<<mr<<" g.";
      while(mr>=0.5)
      {
                   mr = mr/2;
                   cont = cont + 50;
      }
      cout<<"\nA massa final \202: "<<mr<<" g.";
      cout<<"\nO tempo gasto foi de "<<cont<<" segundos.";
      getch();
}
