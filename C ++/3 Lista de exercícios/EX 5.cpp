/*Escreva um algoritmo que leia o peso de v�rias pessoas, aqui na Terra. 
Em seguida calcule e mostre qual ser� o peso de cada uma destas pessoas 
em Marte  e em V�nus. Sabe-se que a gravidade em Marte � 0.38 e em V�nus � 0.88.
A f�rmula para o c�lculo do peso, fora da Terra, considerando a gravidade �
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
  
