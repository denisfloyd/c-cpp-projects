/* Faça um algoritmo que imprima o valor do somatório 
        y=1 --> y=200    1/y
*/ 

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       float y=1,s=0;
       while (y<=200)
       {
             s=s+1/y;
             y=y+1;
       }
       cout<<"\n\nA soma e:"<<setw(8)<<s;
       getch();
}
       
