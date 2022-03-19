/* Escreva um algoritmo que calcule e mostre: 
   a.  A soma dos primeiros 50 números pares; 
   b.  A soma dos primeiros 50 números ímpares; 
 Esse algoritmo não efetua leitura a partir do teclado. 
*/

#include<iostream>
#include<conio.h>
using namespace std;
main() 
{
       int cont=1;
       float p=2, i=1, sp=0, si=0;
       while (cont <= 50)
       {
             sp += p;
             si += i;
             p += 2;
             i += 2;
             cont++;
       }
       cout<<"\n A soma do 50 pares: "<<sp;
       cout<<"\nA soma dos impares: " <<si;
       getch();
}  
             
             
             
             
       
