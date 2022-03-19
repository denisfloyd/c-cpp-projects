/* Escreva um algoritmo que leia o peso de uma pessoa, aqui na Terra. Em seguida 
calcule e mostre qual será o peso lido em Marte e em Vênus. Sabe-se que a 
gravidade relativa em Marte é 0.38 e em Vênus é 0.88. A fórmula para o cálculo do 
peso, fora da Terra, considerando a gravidade relativa é:  
              peso no planeta = (pterra * Grav.) / 10
*/
 
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float p,pm,pv;
       cout<<"\nDigite o seu peso: ";
       cin>>p;
       pm=p/10*0.38;
       pv=p/10*0.88;
       cout<<"\n\n\nO seu peso em Marte e: "<<pm<<" Kg.";
       cout<<"\n\n\nO seu peso em Venus e: "<<pv<<" Kg.";
       getch();
} 
       
