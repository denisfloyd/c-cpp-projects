/* Construa um algoritmo que leia 10 n�meros do tipo real. Calcule e mostre: 
a)  A quantidade de n�meros positivos; 
b)  A quantidade de n�meros negativos; 
c)  A quantidade de n�meros nulos. 
*/ 

#include<iostream> 
#include<conio2.h>
using namespace std;
main() 
{ 
       float n, cont=1, cp=0, cn=0, cnulo=0;
       while (cont<=10) 
       {
             cout<<"\n\nDigite o "<<cont<<"o. numero: ";
             cin>>n;
             if (n>0)
             {
                     cp++;
             }
             else
             { 
                     if (n<0)
                     {
                             cn++;
                     }
                     else
                     {
                             cnulo++;
                     }
             }
       cont++;
       }
       cout<<"\n\n\n\nA quantidade de numeros POSITIVOS: "<<cp;
       cout<<"\nA quantidade de numeros NEGATIVOS: "<<cn;
       cout<<"\nA quantidade de numeros NULOS: "<<cnulo;
       getch();
}  
       
       
        
                     
