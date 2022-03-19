/* Faça um algoritmo que calcule e imprima o valor do número p, utilizando a seguinte 
série: 
        p = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...

Para garantir o número 3.1415 execute a rotina, pelo menos, 2500 vezes.
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       float n,d,s;
       int cont;
       n=4;d=1;cont=1;s=0;
       while(cont<=2500)
       { 
                        s=s+n/d;
                        d=d+2;
                        cont=cont+1;
                        s=s-n/d;
                        d=d+2;
                        cont=cont+1;
       }
       cout<<setprecision(5);
       cout<<"\n\nO valor aproximado de pi \202:\t"<<s;
       getch();
}
       
                         
