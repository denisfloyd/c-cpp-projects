/* Sendo H = 1 + � + 1/3 + � + ... + 1/N, elabore um algoritmo para gerar e imprimir o 
n�mero H. O valor de N dever� ser lido. */

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
       float x=1,n,d=1,h=0;
       cout<<"Digite o valor de N :";
       cin>>n;
       while (d<=n) 
       {
             h=h+x/d;
             d=d+1;
       }
       cout<<"O valor de H \202:  "<<h;
       getch(); 
}
       
