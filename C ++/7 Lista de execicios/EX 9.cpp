/* Escreva um algoritmo que leia um vetor de 10 elementos do tipo real e: 
a) Mostre a quantidade de elementos maiores que 100. Se n�o existir nenhum elemento, 
mostre uma mensagem indicando esta situa��o; 
b) Mostre a m�dia entre os elementos menores que 50. Se n�o existir nenhum elemento 
que satisfa�a esta condi��o, mostre uma mensagem indicando tal situa��o.
*/


#include<iostream>
#include<conio2.h> 
#define t 10
using namespace std;
main() 
{ 
       float v[t], s=0;
       int i=0,q=0;
       while (i<t)
       { 
             cout<<"\n\nDigite o "<<i+1<< "o. elemento: ";
             cin>>v[i];
             if (v[i]>100)
             { 
                          q++;
             }
             if (v[i]<50) 
             {
                          s += v[i];
             }
             i++;
       }
       if (q==0)
       {
               cout<<"\n\n\nN\306o h\240 nenhum elemento maior que 100.";
       }  
       else
       { 
               cout<<"\n\n\nA qtd de elementos maiores que 100 \202: "<<q;
       }
       if (s==0)
       {
               cout<<"\nN\360 h� nenhum elemento menor que 50.";
       }  
       else 
       {
               cout<<"\nA m\202dia dos elementos menores que 50 \202: "<<s/t;
       } 
       getch();
} 
          
             
                   
                           
