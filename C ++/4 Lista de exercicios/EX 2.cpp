/* Construa um algoritmo que leia 100 números, do tipo real. Calcule e mostre: 
a.  Multiplicação entre entre os números lidos; 
b.  A soma entre os números lidos; 
c.  A média entre entre os números lidos.
*/

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      int i=0, c = 10;
      float s=0, n, mult=1;
      while(i<c)
      {
            cout<<"\nDigite o "<<i+1<<"o. nr: ";
            cin>>n;
            s += n;
            mult *= n;
            i++;
      }
      cout<<"\n\nA soma dos nrs: "<<s;
      cout<<"\nA multiplica\207\306o dos nrs: "<<mult;
      cout<<"\nA m\202dia : "<<s/c;
      getch();
}
