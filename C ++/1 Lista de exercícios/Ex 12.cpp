/* Escreva um algoritmo que converta uma temperatura de Fahrenheit para 
Cent�grados. Utilize a seguinte f�rmula a realizar a convers�o: C = (F - 32) * (5 / 9). 
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
       cout<<"\n\n\nA temperatura em graus Celsius �: "<<tempc;
       getch();
}
       
