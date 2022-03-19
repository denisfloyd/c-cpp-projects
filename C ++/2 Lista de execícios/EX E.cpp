/*      Escreva um algoritmo que leia 5 nrs. inteirose mostre a
        soma entre eles.
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{     
       int cont=1;
       float n,s=0;
       while (cont<=5) {
             cout<<"\n\nDigite o "<<cont<<" nr: ";
             cin>>n;
             s=s+n;
             cont=cont+1; }
       cout<<"\n\nA soma dos nrs \202: "<<s;
       getch();
}
       
//Primeiro exemplo do enquanto - faça (while - do) !
