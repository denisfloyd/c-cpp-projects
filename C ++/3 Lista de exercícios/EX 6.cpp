/*Fulano tem 1,50 m e cresce 2 cm por ano, enquanto Ciclano tem 1,10 m e cresce 3 cm por 
ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que 
Ciclano seja maior que Fulano.*/
 
#include<iostream>;
#include<conio2.h>;
using namespace std;
main()
{
      float f=1.50, c=1.10;
      int cont=0;
      while(f>=c)
      {
                 f += 0.02;
                 c += 0.03;
                 cont++;
      }
      cout<<"\n\nO nr de anos ser\306o: "<<cont;
      getch();
}
