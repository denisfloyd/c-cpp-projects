/* /* Faça um algoritmo que calcule e imprima o seguinte somatório S: 
        S = 480/10 - 475/11 + 470/12 - 465/13 ...
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float n=480,d=10,s=0;
       while (d<=39)
       {
             s=s+n/d;
             n=n-5;
             d=d+1;
             s=s-n/d;
             n=n-5;
             d=d+1; 
       }
       cout<<"A soma \202:  "<<s;
       getch();
}
       
