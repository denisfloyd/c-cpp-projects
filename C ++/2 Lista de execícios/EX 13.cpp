/* A convers�o de graus Fahrenheit para Celsius � obtida por C = 5/9 * (F � 32). Fa�a 
um algoritmo que calcule e mostre tal convers�o cujos valores variem de 50� a 65� de 
1� em 1�. */ 

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
              
            
             

          
