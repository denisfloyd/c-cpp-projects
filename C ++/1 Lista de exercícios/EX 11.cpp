/* Construa um algoritmo que leia tr�s n�meros, do tipo inteiro, e apresente o 
resultado da soma das combina��es, dois a dois destes tr�s n�meros. Por exemplo, 
se forem lidas as vari�veis A, B e C, mostrar a soma entre: A + B, A + C, B + C. */

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
       
/* Mesmo explica��o do ex. 13, por�m neste haveria a necessidade de
   trabalhar com vetor
*/
