/* A conversão de graus Fahrenheit para Celsius é obtida por C = 5/9 * (F – 32). Faça 
um algoritmo que calcule e mostre tal conversão cujos valores variem de 50º a 65º de 
1º em 1º. */ 

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{ 
      float f=50, c;
      while (f<=65)
      {
            c=(f-32)*5/9;
            cout<<"\n\nA conversao de "<<f<<" Fahrenheit para Celsius \202: "<<c;
            f++;
      }
      getch();
}
              
            
             

          
