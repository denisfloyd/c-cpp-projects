/* Execícios dados como exemplo no laboratório de Info. 
   Funções Básicas
*/

#include<iostream>
#include<conio2.h>
using namespace std;
main() 
{ 
       int cont=1, n, s=0, cp=0, ci=0;
       while (cont<=5) //enquanto 
       { //faça
             cout<<"\nDigite o "<<cont <<"o. nr: ";
             cin>>n;
             s += n;
             if (n % 2 ==0) //se o resto da divisão por 2 for 0 
             { //então
                   cp++; //cp = cp + 1
             }
             else //senão
             { 
                   ci++;  //ci = ci + 1
             }
             cont++;
       }    
       cout<<"\n\nA soma entre os nrs \202: "<<s;
       cout<<"\nA quantidade de PARES \202: "<<cp;
       cout<<"\nA quantidade de IMPARES \202: "<<ci;  
       getch();
}   
