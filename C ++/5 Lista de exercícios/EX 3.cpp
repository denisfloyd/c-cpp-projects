/* Faça um algoritmo que leia 20 números inteiros e a seguir: 
a)  Calcule e mostre a quantidade de elementos ímpares; 
b)  Calcule e mostre a soma entre os elementos pares e >= a 12. 
*/

#include<iostream> 
#include<conio2.h>
using namespace std;
main() 
{ 
       int n, ci=0, sp12=0, cont=1;
       while (cont<=20)
       {
             cout<<"\nDigite o "<<cont<<"o. numero: ";
             cin>>n;
             if (n % 2 ==1)
             { 
                   ci++;
             }
             if (n % 2 ==0 && n>=12)
             {
                         sp12 += n;
             }
             cont++;
       }
       cout<<"\n\n\nA quantidade dos IMPARES: "<<ci;
       cout<<"\nA soma dos PARES e maiores que 12: "<<sp12;
       getch() ;
} 
