/* Construa um algoritmo que leia três números, do tipo inteiro, e apresente o 
resultado da soma das combinações, dois a dois destes três números. Por exemplo, 
se forem lidas as variáveis A, B e C, mostrar a soma entre: A + B, A + C, B + C. */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float a,b,c,soma1,soma2,soma3;
       cout<<"\nDigite o primeiro numero: ";
       cin>>a;
       cout<<"\n\nDigite o segundo numero: ";
       cin>>b;
       cout<<"\n\nDigite o terceiro numero: ";
       cin>>c;
       soma1=a+b;
       soma2=a+c;
       soma3=b+c;
       cout<<"\n\n\nA soma das combinacoes destes numeros sao: "<<soma1<<", "
       <<soma2<<", "<<soma3<<".";
       getch();
}
       
/* Mesmo explicação do ex. 13, porém neste haveria a necessidade de
   trabalhar com vetor
*/
