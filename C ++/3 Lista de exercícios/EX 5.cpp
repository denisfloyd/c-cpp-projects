/*Escreva um algoritmo que leia o peso de várias pessoas, aqui na Terra. 
Em seguida calcule e mostre qual será o peso de cada uma destas pessoas 
em Marte  e em Vênus. Sabe-se que a gravidade em Marte é 0.38 e em Vênus é 0.88.
A fórmula para o cálculo do peso, fora da Terra, considerando a gravidade é
               peso no planeta = (pterra * grav.) /10  */ 

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      float p, pm, pv;
      textbackground(RED);
      system("cls");
      textcolor(BLACK);
      cout<<"\nDigite o seu peso: ";
      cin>>p;
      while(p!=-1)
      {
                  cout<<"\nSeu peso em Marte \202: "<<(p * 0.38)/10;
                  cout<<"\nSeu peso em Venus \202: "<<(p * 0.88)/10;
                  cout<<"\n\nDigite seu peso: ";
                  cin>>p;
      }
      getch();
}
  
