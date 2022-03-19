/* Faça um algoritmo que leia 10 números inteiros e a seguir: 
a)  Calcule e mostre a quantidade de elementos divisíveis por 3; 
b)  Calcule e mostre a quantidade de elementos ímpares e maiores que 11.
*/ 

#include<iostream>
#include<conio2.h> 
using namespace std;
main()                
{ 
       int cont=1, n, qa=0, qb=0;
       while (cont<=10)
       { 
             cout<<"\nDigite o "<<cont<<"o. numero: ";
             cin>>n;
             if (n % 3 ==0) 
             { 
                   qa++;
             }
             if (n % 2 ==1 && n>11)
             { 
                   qb++;
             }
             cont++;
       }
       cout<<"\n\n\nQuant. de elementos divisiveis por 3: "<<qa;
       cout<<"\nQuant. de IMPARES e maiores que 11: "<<qb;
       getch();
}    
                   
