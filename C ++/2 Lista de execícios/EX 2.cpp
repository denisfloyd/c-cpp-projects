/* Construa um algoritmo que calcule e imprima o somatório dos 30 primeiros termos 
da série: 
 
          S = 10/480 + 11/475 + 12/70 + 13/465+ ...
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{                                             
       float n=480,s=0,d=10;
       int cont=1;
       while (cont<=30)
       {      
             s=s+n/d;
             n=n-5;
             d=d+1;
             cont=cont+1;
       }
       cout<<"A soma \202:"<<setw(8)<<s;
       getch();
}
       
