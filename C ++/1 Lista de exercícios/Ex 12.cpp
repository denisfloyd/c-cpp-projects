/* Escreva um algoritmo que converta uma temperatura de Fahrenheit para 
Centígrados. Utilize a seguinte fórmula a realizar a conversão: C = (F - 32) * (5 / 9). 
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float tempf,tempc;
       cout<<"\n\nInsira a temperatura em Fahrenheit: ";
       cin>>tempf;
       tempc= (tempf-32)*5/9;
       cout<<"\n\n\nA temperatura em graus Celsius é: "<<tempc;
       getch();
}
       
