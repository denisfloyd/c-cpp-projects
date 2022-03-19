/*      C++ Exemplo 6
        Escreva um programa que leia 5 nrs inteiros e mostre a soma
        entre os pares e a multiplicação entre os ímpares.
*/

#include<iostream> 
#include<conio2.h> 
using namespace std;
main()
{
      int n, mult=1, s=0, cont = 1;
      while(cont <= 5)
      {
                 cout<<"\nDigite o "<<cont<<"o. nr: ";
                 cin>>n;
                 if (n % 2 == 0)
                 {
                       s += n;
                 }
                 else
                 {
                       mult *= n;
                 }
                 cont++;
      }
      cout<<"\n\nA soma entre PARES: "<<s; 
      cout<<"\nA multiplica\207\306o entre IMPARES: "<<mult;
      getch();
}
