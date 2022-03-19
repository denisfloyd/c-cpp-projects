/*      C++ Exemplo 4'
        Escreva um programa que leia o valor do raio. calcule e mostre:
        a) A area do circulo: ac = pi * r^2
        b) A circunferencia do circulo: c = 2*pi*r
*/

#include<iostream>
#include<math.h>  
#include<conio2.h>
using namespace std;
#define pi 3.14    
main()
{ 
        int i=1;
        double ac,c;
        float r;
        while (i<=5) 
        { 
              cout<<"\nDigite o raio: ";
              cin>>r;
              ac=pi*pow(r,2);
              c=pi*2*r;
              cout<<"\n\nA area do circulo \202: "<<ac<<" cm2.";
              cout<<"\n\nA circunferencia do circulo \202: "<<c<<" cm."<<"\n\n\n\n\n\n\n\n";
              i++; 
        } 
        system("PAUSE");
}
        
        
