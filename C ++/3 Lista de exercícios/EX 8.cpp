/*Supondo que a população de um país A seja da ordem de 90.000 habitantes com uma taxa 
anual de crescimento de 3% e que a população de um país B seja aproximadamente de 200.000 
habitantes com taxa anual de 1.5% de crescimento. Construir um programa que calcule e mostre 
o número de anos necessários para que a população do país A ultrapasse ou iguale a população 
do país B, mantidas as taxas de crescimento. */

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      float a=90000, b=200000;
      int cont=0;
      while (b>a)
      {
            a *= 1.03;
            b *= 1.015;
            cont++;
      }
      cout<<"\n\nO nr de anos s\306o: "<<cont;
      getch();
}
