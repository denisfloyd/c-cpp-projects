/* Escreva um algoritmo que efetue a soma de todos os  números ímpares e que 
sejam múltiplos de 3 e que se encontram no intervalo dos números entre 1 até 
500. Mostre a soma calculada. */ 

#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{
      int n = 1, s=0;
      do
      {
            if(n % 3 == 0)
            {
                  s += n;
            }
            n += 2;
      }while(n < 500);
      cout<<"\n\n\t\tA soma dos IMPARES multiplos de 3: "<<s;
      getch();
}
