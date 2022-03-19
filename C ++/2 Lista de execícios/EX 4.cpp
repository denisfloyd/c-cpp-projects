/* Faça um algoritmo que calcule e imprima o seguinte somatório S: 
        S = 37*38/1 + 36*37/2 + 35*36/3 +...+ 1*2/37.
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{ 
       float a=37,b=38,d=1,s=0;
       while (d<=37)
       {
             s=s+a*b/d;
             a=a=1;
             b=b-1;
             d=d+1;
       }
       cout<<"\nA soma \202 "<<s;
       getch();
}
       
       
