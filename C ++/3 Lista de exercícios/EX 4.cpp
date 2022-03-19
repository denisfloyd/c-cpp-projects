/*O restaurante Bem-Bão cobra R$19.90 por cada quilo de refeição. Escreva um algoritmo que 
leia o peso do prato com a refeição do cliente e imprima o valor a pagar. Assuma que a balança 
já desconte o peso do prato. O algoritmo deverá ser finalizado quando for lido o elemento -10, 
que não entrará para os cálculos. */

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      float n;
      int c=0;
      cout<<"\nDigite o peso do prato: ";
      cin>>n;
      while(n!=-10)
      {
                   cout<<"\nO total a pagar \202: "<<n * 19.90;
                   c++;
                   cout<<"\n\n";
                   cout<<"Digite o peso do prato: ";
                   cin>>n;
      }
      cout<<"\n\nA qtd. de refei\207oes foi: "<<c;
      getch();
}
