/* Construa um algoritmo que leia dois n�meros inteiros, divida um pelo outro e 
mostre o resto da divis�o (suponha que ser� dividido o maior pelo menor). 
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
       cout<<"\n\n\nO resto �:"<<setw(5)<<resto;
       getch();
}
       
/* obs.: Na �poca que aprendi este algoritmo, n�o conhecia o la�o if - else, no
   qual o mesmo daria uma melhor funcionalibidade � este algoritmo
*/
