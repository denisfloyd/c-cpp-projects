/* Faça um algoritmo que leia 15 números inteiros e mostre: 
 a) A quantidade de números entre 30 e 90 (inclusive os extremos); 
 b) O somatório dos números negativos; 
c) A quantidade de números ímpares.
*/

#include<iostream>   
#include<conio.h>
using namespace std;
main() 
{
       float s=0;
       int cont=1, n, q3=0, qi=0;
       while (cont<=15)
       { 
             cout<<"\nDigite o "<<cont<<"o. numero: ";
             cin>>n;
             if (n>= 30 && n<=90) 
             { 
                     q3++;
             } 
             if (n % 2==1)
             {
                     qi++;
             }
             if (n<0)
             { 
                     s += n;
             }
             cont++;
       }
       cout<<"\n\n\nA quant. de nrs entre 30 e 90 \202: "<<q3;
       cout<<"\nA soma dos negativos: "<<s;
       cout<<"\nA quant. de nrs IMPARES: "<<qi;
       getch();
}    
               
