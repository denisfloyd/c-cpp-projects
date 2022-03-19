/* A empresa de ônibus ABC armazena as capacidades dos tanques de combustível de
   cada um de seus ônibus. As férias de Julho fazem com que a empresa coloque to-
   dos os ônibus em circunlação. o dono da empresa deseja saber qual valor a ser
   desenbolsado no dia 30/06, pois dia 01/07 é aniversário de Assis, quando a 
   ABC encher todos os tanques com óleo Diesel e Gasolina.
   Escreva em algoritmo que leia um valor de cada litro de Diesel e também Gaso-
   lina. Calcule e mostre: 
   a) O valor total gasto pela empresa.
   b) O valor gasto com gasolina.
   c) O valor gasto com Óleo Diesel.
*/
 
#include<iostream>
#include<conio2.h>
#define t 12
using namespace std;
main()
{
      float gas, die, v[t], s=0, s1=0;
      int i;
      cout<<"\nDigite o pre\207o do litro da gasolina :"; 
      cin>>gas;
      cout<<"\nDigite o pre\207 do litro do Diesel: ";
      cin>>die;
      cout<<"\n\n";
      for(i=0; i<t; i++)
      {
               cout<<"\n1 - GASOLINA    2 - DIESEL: ";
               cin>>v[i];
               i++;
               cout<<"\nDigite a capacidade do tanque: ";
               cin>>v[i];
      }
      for(i=0; i<t; i++)
      {
               if(v[i] == 1)
               {
                       s += (v[i+1]*gas);
               }
               else               
               {
                   s1 += (v[i+1]*die);
               }
               i++;
      }
      cout<<"\n\n\nO total gasto: "<<s+s1;
      cout<<"\nO total gasto com Gasolina: "<<s;
      cout<<"\nO total gasto com Diesel: "<<s1;
      getch();
}
