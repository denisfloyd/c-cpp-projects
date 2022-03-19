/* Faça um algoritmo que leia a idade de 10 pessoas, calcule e mostre: 
 a) A quantidade de pessoas com idade maior ou igual a 18 anos; 
 b) A média entre todas as idades; 
c) A média das idades entre 10 e 20 anos.
*/ 

#include<iostream> 
#include<conio2.h>
using namespace std;
main() 
{ 
       float i, s=0, s1=0;
       int cont=1, c1=0, c18=0;
       while (cont<=10)
       {
             cout<<"\nDigite a "<<cont<<"a. idade: ";
             cin>>i;
             s += i;
             if (i>=18)
             { 
                       c18++;
             }
             if(i>10 && i<20)
             { 
                 s1 += i;
                 c1++;
             }
             cont++;
       }
       cout<<"\n\n\nA quant. de pessoas maiores de 18: "<<c18;
       cout<<"\nA m\202dia entre todas as idades: "<<s/10;
       cout<<"\nA m\202dia das idades entre 10 e 20 anos: "<<s1/c1;
       getch() ;
}
