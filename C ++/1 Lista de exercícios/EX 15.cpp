/* Construa um algoritmo que leia dois números inteiros, divida um pelo outro e 
mostre o resto da divisão (suponha que será dividido o maior pelo menor). 
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       int a,b,quoc,resto;
       cout<<"\n\nDigite o primeiro numero maior que o segundo: ";
       cin>>a;
       cout<<"\n\nDigite o segundo numero: ";
       cin>>b;
       quoc = a/b;
       resto = a - (quoc*b);
       cout<<"\n\n\nO resto é:"<<setw(5)<<resto;
       getch();
}
       
/* obs.: Na época que aprendi este algoritmo, não conhecia o laço if - else, no
   qual o mesmo daria uma melhor funcionalibidade à este algoritmo
*/
