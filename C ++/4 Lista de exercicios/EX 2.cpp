/* Construa um algoritmo que leia 100 n�meros, do tipo real. Calcule e mostre: 
a.  Multiplica��o entre entre os n�meros lidos; 
b.  A soma entre os n�meros lidos; 
c.  A m�dia entre entre os n�meros lidos.
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
