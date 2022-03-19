/*Faça um algoritmo que calcule e imprima o seguinte somatório: 
          S = 1/5 + 2/8+ 3/11+ ... + 10/32
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       float n=5,d=1,s=0;
       while(d<=10)
       {
                    s=s+n/d;
                    n=n+3;
                    d=d+1;
       }
       cout<<"\nA soma é:"<<setw(8)<<s;
       getch();
}
       

       
