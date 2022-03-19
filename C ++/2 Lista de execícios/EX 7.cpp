/* Construa um algoritmo que calcule e imprima o seguinte somatório: 
            2^1/50 + 2^2/49 + 2^3/48 + ... + 2^50/1.
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       float n=2,d=50,s=0;
       while (d>=1) 
       {
             s=s+n/d;
             n=n*2;
             d=d-1;
       }
       cout<<"\nA soma \202: "<<setw(2)<<s;
       getch();
}
       
