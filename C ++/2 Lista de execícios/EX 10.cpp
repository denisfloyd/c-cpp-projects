/* Faça um algoritmo que leia o valor de X e a seguir calcule e mostre o valor do 
somatório: 
           x^25/1 + x^24/2 + x^23/3 + ... + x/25
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
       float x,d=1,e=25,s=0;
       cout<<"Informe o valor de x :";
       cin>>x;
       while (d<=25) 
       {
             s=s+pow(x,e)/d;
             e=e-1;
             d=d+1; 
       }
       cout<<"\n\nA soma \202:  "<<s;
       getch();
}
       
       
