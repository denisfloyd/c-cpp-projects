/* Escreva um algoritmo que calcule o volume de uma esfera em função do raio R. O 
raio deverá variar de 0 a 20 cm de 0.5 em 0.5 cm. 
            V = 4/3 * pi * R3
*/
 
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
main() 
{  
       float r=0,v;
       while (r<=20)
       {
             v=(4*3.14*pow(r,3))/3;
             cout<<"\n\nO volume do raio "<<r<<" \202: "<<setw(2)<<v;
             r=r+0.5;
       }
       getch(); 
}
       
       
                    
             
