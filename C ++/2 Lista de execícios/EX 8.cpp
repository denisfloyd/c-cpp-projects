/*  Faça um algoritmo que calcule e mostre o valor de H: 
         H = 1/225 - 2/196 + 4/169 - 8/144 +...+ 16384/1 .
*/ 

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
       float h=0,n=1,d=15;
       while (n<=16384) 
       {
             h=h+n/(d*d);
             n=n*2;
             d=d-1;
       }
       cout<<"\nO valor de H \202:  "<<h;
       getch();
}
             
